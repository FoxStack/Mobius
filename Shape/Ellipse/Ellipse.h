#include "../Shape.h"
#include <cmath>

class Ellipse: public Shape
{
public:
    explicit Ellipse(QPaintDevice *device);
    ~Ellipse();
    void Draw() override;
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