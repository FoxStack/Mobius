#include "Text.h"

Text::Text(QPaintDevice *device): Shape(device)
{

}

Text::~Text() = default;

void Text::Draw()
{
    //pass the font object to the qpainter
    qPainter->setFont(font); //gets all font details (bold, font type, size, ...)

    //construct a rectangle that bounds the text with the text object's attributes
    QRectF rectForText(textCoord.x, textCoord.y, w, l);

    //draw text with qpainter passing the rectangle and alignment
    qPainter->drawText(rectForText, alignmentFlag, str);
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

void Text::SetFontWeight(QFont::Weight weight)
{
    font.setWeight(weight);
}

void Text::SetTextAlignment(Qt::AlignmentFlag alignment)
{
    alignmentFlag = alignment;
}

void Text::SetTextColor(Qt::GlobalColor textColor)
{
    QColor color(textColor);
    qPen.setColor(color);
}
