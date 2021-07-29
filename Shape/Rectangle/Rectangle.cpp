#include "Rectangle.h"

Rectangle::Rectangle(QPen pen, QBrush brush, Coord coord, int width, int length)
:Shape(pen, brush, coord), w{width}, l{length}
{
}

Rectangle::~Rectangle() = default;

void Rectangle::Draw(QPaintDevice *device) {
    qPainter->begin(device);
    qPainter->setBrush(qBrush);
    qPainter->setPen(qPen);
    qPainter->drawRect(shapeCoord.x, shapeCoord.y, w, l);
    qPainter->end();
}

void Rectangle::Move(Coord coord) { shapeCoord = coord; }

double Rectangle::Perimeter() { return 2 * (l + w); }

double Rectangle::Area() { return l * w; }

void Rectangle::SetDimensions(int width, int length) {
    w = width;
    l = length;
}
