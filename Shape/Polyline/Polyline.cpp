#include "Polyline.h"

Polyline::Polyline(QPen pen, QBrush brush, Coord coord, Vector<QPoint> points)
:Shape(pen, brush, coord), pointList{points}{
}

void Polyline::Draw(QPaintDevice *device) {
    QPolygon poly;
    QPainterPath path;
    for (QPoint point: pointList)
    {
        poly << point;
    }
    qPainter->begin(device);
    qPainter->setBrush(qBrush);
    qPainter->setPen(qPen);
    qPainter->drawPolyline(poly);
    qPainter->end();
}

void Polyline::Move(Coord coord) {

}

double Polyline::Area() {
    return 0;
}

double Polyline::Perimeter() {
    return 0;
}

