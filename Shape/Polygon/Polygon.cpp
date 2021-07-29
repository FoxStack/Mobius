#include "Polygon.h"
#include <iostream>

Polygon::Polygon(QPen pen, QBrush brush, Coord coord, Vector<QPoint> points)
    :Shape(pen, brush, coord), pointList{points}{
}

void Polygon::Draw(QPaintDevice *device) {
    std::cout << "here" << std::endl;
    QPolygon poly;
    QPainterPath path;
    for (QPoint point: pointList)
    {
        poly << point;
    }
    path.addPolygon(poly);
    qPainter->begin(device);
    qPainter->setPen(qPen);
    qPainter->fillPath(path, qBrush);
    qPainter->drawPolygon(poly);
    qPainter->end();
}

void Polygon::Move(Coord coord) {
    QPoint firstPoint = pointList.at(0);

    for (QPoint point: pointList)
    {
        std::cout << point.x() << std::endl;
        point.setX(coord.x + firstPoint.x());
        point.setY(coord.y + firstPoint.y());
        std::cout << point.x() << std::endl;
    }

}

double Polygon::Area() {
    return 0;
}

double Polygon::Perimeter() {
    return 0;
}

void Polygon::AddPoint(QPoint qPoint){
    pointList.push_back(qPoint);
}
