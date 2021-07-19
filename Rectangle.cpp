#include "Rectangle.h"

void Rectangle::Draw()
{
    qPainter.setBrush(qBrush);
    qPainter.setPen(qPen);
    qPainter.drawRect(rectCoord.x, rectCoord.y, w, l);
}

void Rectangle::Move(Coord coord)
{
    shapeCoord = coord;
}

double Rectangle::Perimeter()
{
    return 2 * (l + w);
}

double Rectangle::Area()
{
    return l * w;
}

void Rectangle::SetDimensions(int length, int width)
{
    l = length;
    w = width;
}



