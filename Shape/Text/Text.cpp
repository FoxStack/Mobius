#include "Text.h"
#include <iostream>

Text::Text(QPen pen, QBrush brush, Coord coord, QString string)
:Shape(pen, brush, coord)
{
    this->str = string;
}

Text::~Text() = default;

void Text::Draw(QPaintDevice *device)
{
    qPainter->begin(device);
    qPainter->setBrush(qBrush);
    qPainter->setPen(qPen);
    qPainter->setFont(font);
    qPainter->drawText(QPoint{shapeCoord.x, shapeCoord.y}, str);
    qPainter->end();
}

void Text::Move(Coord coord)
{
    shapeCoord = coord;
}

double Text::Area()
{
    return 0;
}

double Text::Perimeter()
{
    return 0;
}

void Text::SetString(QString string)
{
    str = string;
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

void Text::SetFontWeight(QFont::Weight weight)
{
    font.setWeight(weight);
}

void Text::SetTextAlignment(Qt::Alignment alignment)
{
    alignmentFlag = alignment;
}

void Text::SetTextColor(QColor textColor)
{
    qPen.setColor(textColor);
}
