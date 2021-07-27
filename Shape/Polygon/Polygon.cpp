#include "Polygon.h"

void Polygon::Draw(QPaintDevice *device) {
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