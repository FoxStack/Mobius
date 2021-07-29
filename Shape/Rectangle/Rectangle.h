#pragma once

#include "../Shape.h"

class Rectangle : public Shape {
public:
    explicit Rectangle(QPen pen, QBrush brush, Coord coord, int width, int length);
    ~Rectangle() override;
    void Draw(QPaintDevice *device) override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetDimensions(int width, int length);

private:
    int l{};
    int w{};
};
