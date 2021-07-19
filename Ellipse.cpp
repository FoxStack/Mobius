#include "Ellipse.h"

void Ellipse::Draw()
{
    qPainter.setBrush(qBrush);
    qPainter.setPen(qPen);
    qPainter.drawEllipse(center, a, b);
}

void Ellipse::Move(Coord coord)
{
    shapeCoord = coord;
}

double Ellipse::Perimeter()
{
    return 2 * M_PI * sqrt(double(a*a + b*b) / 2);
}

double Ellipse::Area()
{
    return a * b * M_PI;
}

void Ellipse::SetDimensions(int majorAxis, int minorAxis)
{
    a = majorAxis;
    b = minorAxis;
}

void Ellipse::SetCenter(int x, int y)
{
    center.setX(x);
    center.setY(y);
}
