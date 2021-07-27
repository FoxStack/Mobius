#include "Line.h"

Line::Line(QPen pen, QBrush brush, Coord coord, QPoint p1, QPoint p2)
        :Shape(pen, brush, coord), p1{p1}, p2{p2}
{

}

void Line::Draw(QPaintDevice *device) {
    qPainter->begin(device);
    qPainter->drawLine(p1, p2);
    qPainter->end();
}

void Line::Move(Coord coord) { shapeCoord = coord; }

double Line::Area() { return 0; }

double Line::Perimeter() { return 0; }

void Line::SetPointOne(int x, int y) {
    p1.setX(x);
    p1.setY(y);
}

void Line::SetPointTwo(int x, int y) {
    p2.setX(x);
    p2.setY(y);
}
