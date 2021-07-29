#pragma once

#include "../Shape.h"
#include "../../Vector/Vector.hpp"

class Polyline: public Shape
{
public:
    explicit Polyline()= default;
    ~Polyline() override = default;

    void Draw(QPaintDevice *device) override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

private:

};