#include "Rectangle.h"

Rectangle::Rectangle(QPaintDevice *device) : Shape(device) {}

Rectangle::~Rectangle() = default;

void Rectangle::Draw() { qPainter->drawRect(rectCoord.x, rectCoord.y, w, l); }

void Rectangle::Move(Coord coord) { shapeCoord = coord; }

double Rectangle::Perimeter() { return 2 * (l + w); }

double Rectangle::Area() { return l * w; }

void Rectangle::SetDimensions(int width, int length) {
  w = width;
  l = length;
}

void Rectangle::SetCoord(int x, int y) {
  rectCoord.x = x;
  rectCoord.y = y;
}
