#include "Shape.h"

class Rectangle: public Shape
{
    void Draw() override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetDimensions(int length, int width);

private:
    int l;
    int w;
    Coord rectCoord;
};