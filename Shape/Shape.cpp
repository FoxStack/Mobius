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

int Shape::GetId() { return id; }

void Shape::setBrush(const QBrush &brush){
    qBrush = brush;
}

void Shape::setPen(const QPen &pen){
    qPen = pen;
}

void Shape::SetCoord(int x, int y) {
    shapeCoord.x = x;
    shapeCoord.y = y;
}

