#include "Shape.h"

int Shape::numOfShapes = 0;

Shape::Shape(QPen pen, QBrush brush, Coord coord)
        :qPen{pen}, qBrush{brush}, shapeCoord{coord}
{
    qPainter = new QPainter;
    id = numOfShapes;
    numOfShapes++;
}

Shape::~Shape() {
    delete qPainter;
}

bool Shape::operator==(const Shape &other) const {
    return this->id == other.id;
}

bool Shape::operator<(const Shape &other) const { return this->id < other.id; }

bool Shape::operator>(const Shape &other) const { return this->id > other.id; }

QBrush Shape::GetBrush() { return qBrush; }

int Shape::GetId() { return id; }

void Shape::SetBrush(Qt::GlobalColor color, Qt::BrushStyle style) {
    qBrush.setColor(color);
    qBrush.setStyle(style);
}

QPen Shape::GetPen() { return qPen; }

void Shape::SetPen(const QBrush &brush, Qt::GlobalColor color, int width,
                   Qt::PenStyle style, Qt::PenCapStyle cap,
                   Qt::PenJoinStyle join) {
    qPen.setBrush(brush);
    qPen.setColor(color);
    qPen.setWidth(width);
    qPen.setStyle(style);
    qPen.setCapStyle(cap);
    qPen.setJoinStyle(join);
}

void Shape::SetCoord(int x, int y) {
    shapeCoord.x = x;
    shapeCoord.y = y;
}