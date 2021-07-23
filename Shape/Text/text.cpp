#include "Text.h"

Text::Text(QPaintDevice *device): Shape(device)
{

}

Text::~Text() = default;

void Text::Draw()
{
    qPainter->setFont(font); //gets all font details (bold, font type, size, ...)
    qPainter->drawText(textCoord.x, textCoord.y, str);
}

void Text::Move(Coord coord)
{
    shapeCoord = coord;
}

double Text::Perimeter()
{
    return 2 * (l + w);
}

double Text::Area()
{
    return l * w;
}

void Text::SetDimensions(int width, int length)
{
    w = width;
    l = length;
}

void Text::SetCoord(int x, int y)
{
    textCoord.x = x;
    textCoord.y = y;
}

void Text::SetString(QString s)
{
    str = s;
}

void Text::SetFontFamily(QString fontFamily)
{
    font.setFamily(fontFamily);
}

void Text::SetFontSize(int fSize)
{
    font.setPointSize(fSize);
}

void Text::SetFontStyle(QFont::Style style)
{
    font.setStyle(style);
}
