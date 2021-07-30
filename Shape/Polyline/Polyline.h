#pragma once

#include "../Shape.h"
#include "../../Vector/Vector.hpp"
//!Polyline Class
/*!
 * derived from Shape, represents properties of a polyline
 */
class Polyline: public Shape
{
public:
    //! Polyline constructor
    explicit Polyline()= default;
    //! Polyline destructor
    ~Polyline() override = default;

    //!Draws the polyline onto the canvas
    void Draw(QPaintDevice *device) override;
    //!Moves the polyline to a different location
    void Move(Coord coord) override;
    //!Returns 0, as polyline doesnt have an area
    double Area() override;
    //!Returns 0, as polyline doesnt have a perimeter
    double Perimeter() override;

private:

};