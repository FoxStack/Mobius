#pragma once

#include "../Shape.h"

class Line : public Shape {
public:
    explicit Line(QPen pen, QBrush brush, Coord coord, QPoint p1, QPoint p2);
    void Draw(QPaintDevice *device) override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetPointOne(int x, int y);
    void SetPointTwo(int x, int y);

private:
    QPoint p1;
    QPoint p2;
};
