#include "Line.h"

Line::Line(QPaintDevice *device): Shape(device)
{

}

void Line::Draw()
{
    qPainter->drawLine(p1, p2);
}

void Line::Move(Coord coord)
{
    shapeCoord = coord;
}

double Line::Area()
{
    return 0;
}

double Line::Perimeter()
{
    return 0;
}

void Line::SetPointOne(int x, int y)
{
    p1.setX(x);
    p1.setY(y);
}

void Line::SetPointTwo(int x, int y)
{
    p2.setX(x);
    p2.setY(y);
}
