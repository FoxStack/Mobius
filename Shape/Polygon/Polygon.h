#pragma once

#include "../Shape.h"
#include "../../Vector/Vector.hpp"

class Polygon: public Shape
{
public:
    explicit Polygon(QPen pen, QBrush brush, Coord coord, Vector<QPoint> points);
    ~Polygon() override= default;

    void Draw(QPaintDevice *device) override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void AddPoint(QPoint qPoint);

private:
    Vector<QPoint> pointList;
};
