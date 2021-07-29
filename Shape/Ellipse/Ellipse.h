#pragma once

#include "../Shape.h"
#include <cmath>

class Ellipse : public Shape {
public:
    explicit Ellipse(QPen pen, QBrush brush, Coord coord, int a, int b);
    ~Ellipse() override;
    void Draw(QPaintDevice *device) override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetDimensions(int majorAxis, int minorAxis);
    void SetCenter(int x, int y);

private:
    int a{};
    int b{};
    QPoint center;
};
