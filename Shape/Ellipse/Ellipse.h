#pragma once

#include "../Shape.h"
#include <cmath>
//! Ellipse Class.
/*!
 * derived from shape class. represents ana Ellipse
 */
class Ellipse : public Shape {
public:
    //! Ellipse constructor
    /*!
     * initializes the pen, brush, coordinates, the minor axis, and major axis
     * @param pen type of pen
     * @param brush type of brush
     * @param coord coordinates for the ellipse
     * @param a major axis
     * @param b minor axis
     */
    explicit Ellipse(QPen pen, QBrush brush, Coord coord, int a, int b);
    //! Ellipse destructor
    ~Ellipse() override;
    //! Draws the ellipse onto the canvas
    /*!
     * Utilizes the qPainter to set the pen currently selected, the brush currently
     * selected and will draw the ellipse using the major axis(a), the minor axis(b),
     * and the center
     */
    void Draw(QPaintDevice *device) override;
    //! Moves the ellipse using coordinates
    /*!
     * overrides Shape::Move() uses the x and y members of coord to moves the current position of the ellipse.
     * @param coord holds the new coordinates for the ellipse, represented as x and y data members
     */
    void Move(Coord coord) override;
    //! Calculates area of the ellipse
    /*!
     * overrides Shape::Area() to calculate the area of the ellipse using the major axis, represented by a,
     * minor axes, represented by b, and pi, represented by M_PI.
     * @return area of the ellipse
     */
    double Area() override;
    //! Calculates the perimeter of the ellipse
    /*!
     * overrides Shape::Perimeter() to calculate the perimeter of an ellipse
     * multiplies 2 by pi and the square root of a^2 + b^2 which is divided by two. The resulting value is returned
     * @return The perimeter of the ellipse
     */
    double Perimeter() override;
    //! Sets the values for the minor and major axes
    /*!
     * using two parameters, will set the dimensions of the ellipse
     * the parameters provide the size of the minor and major axes
     * @param majorAxis Major axis for the ellipse
     * @param minorAxis Minor axis for the ellipse
     */
    void SetDimensions(int majorAxis, int minorAxis);
    //! Sets the center for the ellipse
    /*!
     * uses two parameters to represent the x and y coordinates on a coordinate plane
     * @param x x coordinate for center of ellipse
     * @param y y coordinate for center of ellipse
     */
    void SetCenter(int x, int y);

private:
    int a{}; /*!< int variable a. */
    int b{}; /*!< int variable b. */
    QPoint center; /*!< represents center point of ellipse. */
};
