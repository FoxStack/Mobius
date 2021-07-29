#include "Ellipse.h"

Ellipse::Ellipse(QPen pen, QBrush brush, Coord coord, int a, int b)
:Shape(pen, brush, coord), a{a}, b{b}
{
}

Ellipse::~Ellipse() = default;

void Ellipse::Draw(QPaintDevice *device) {
    center.setX(shapeCoord.x);
    center.setY(shapeCoord.y);
    qPainter->begin(device);
    qPainter->setPen(qPen);
    qPainter->setBrush(qBrush);
    qPainter->drawEllipse(center, a, b);
    qPainter->end();
}

void Ellipse::Move(Coord coord) { shapeCoord = coord; }

double Ellipse::Perimeter() {
    return 2 * M_PI * sqrt(double(a * a + b * b) / 2);
}

double Ellipse::Area() { return a * b * M_PI; }

void Ellipse::SetDimensions(int majorAxis, int minorAxis) {
    a = majorAxis;
    b = minorAxis;
}

void Ellipse::SetCenter(int x, int y) {
    center.setX(x);
    center.setY(y);
}
