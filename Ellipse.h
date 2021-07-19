#include <cmath>
#include "Shape.h"

class Ellipse: public Shape
{
    void Draw() override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetDimensions(int majorAxis, int minorAxis);
    void SetCenter(int x, int y);

private:
    int a;
    int b;
    QPoint center;
};