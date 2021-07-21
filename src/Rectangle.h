#ifndef RACTANGLE_H
#define RACTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
public:
    explicit Rectangle(QPaintDevice *device);
    ~Rectangle();
    void Draw() override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetDimensions(int width, int length);
    void SetCoord(int x, int y);

private:
    int l{};
    int w{};
    Coord rectCoord{};
};

#endif // RACTANGLE_H
