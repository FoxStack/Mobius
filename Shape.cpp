#include "Shape.h"

bool Shape::operator==(const Shape &other) const
{
    return this->id==other.id;
}

bool Shape::operator<(const Shape &other) const
{
    return this->id<other.id;
}

bool Shape::operator>(const Shape &other) const
{
    return this->id>other.id;
}

QBrush Shape::GetBrush()
{
    return qBrush;
}

void Shape::SetBrush(Qt::GlobalColor color, Qt::BrushStyle style)
{
    qBrush.setColor(color);
    qBrush.setStyle(style);
}

QPen Shape::GetPen() {
    return qPen;
}

void Shape::SetPen(const QBrush& brush, Qt::GlobalColor color, int width,
                   Qt::PenStyle style, Qt::PenCapStyle cap, Qt::PenJoinStyle join)
{
    qPen.setBrush(brush);
    qPen.setColor(color);
    qPen.setWidth(width);
    qPen.setStyle(style);
    qPen.setCapStyle(cap);
    qPen.setJoinStyle(join);
}

Shape::Shape()= default;

