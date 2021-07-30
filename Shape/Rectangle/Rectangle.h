#pragma once

#include "../Shape.h"
//! Rectangle Class
/*!
 * Derived from Shape class, provides functions relating
 * to a rectangle.
 */
class Rectangle : public Shape {
public:
    //! Rectangle constructor
    /*!
     * Initializes the pen type/color/style, brush type/color/style,
     * position/coordinates, and the starting and ending points
     * @param pen type/color/style of pen
     * @param brush type/color/style of brush
     * @param coord coordinates/position of rectangle
     * @param width width of rectangle
     * @param length length of rectangle
     */
    explicit Rectangle(QPen pen, QBrush brush, Coord coord, int width, int length);
    //! Rectangle destructor
    ~Rectangle() override;
    //! Draws the rectangle onto the canvas
    /*!
     * utilizes qPainter object to set the pen, brush, and draws the rectangle using the
     * coordinates, length(l) and width(w)
     * @param device takes pen and brush details from device
     */
    void Draw(QPaintDevice *device) override;
    //! Changes the coordinates of the rectangle.
    /*!
     * overrides Shape::Move(); will change the coordinates of the shape
     * to the coordinates from the parameter
     * @param coord holds the new coordinates to move the shape to
     */
    void Move(Coord coord) override;
    //! Calculates the area of the rectangle.
    /*!
     * overrides Shape::Area(); multiplies
     * l*w, representing the length and the width respectively,
     * and returns that value
     * @return l*w
     */
    double Area() override;
    //! Calculates the perimeter of the rectangle
    /*!
     * overrides Shape::Perimeter(); adds l+w, and then multiplies
     * that value by 2; returns that value
     * @return l+w multiplied by two
     */
    double Perimeter() override;
//! Sets dimensions for Rectangle.
    /*!
     * uses parameters representing the length and width. Acts as
     * a setter for both l and w variables
     * @param width value gets assigned to the w value
     * @param length value gets assigned to the l value
     */
    void SetDimensions(int width, int length);

private:
    int l{}; /*!< Length of rectangle*/
    int w{}; /*!< Width of rectangle*/
};
