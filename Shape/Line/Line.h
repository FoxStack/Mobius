#pragma once

#include "../Shape.h"
//! Line Class
/*!
 * derived from Shape, gives properties of a line for the program
 */
class Line : public Shape {
public:
    //! Line Constructor
    /*!
     *
     * @param pen type of pen
     * @param brush type of brush
     * @param coord position/coordinates for line
     * @param p1 starting point for line
     * @param p2 ending point for line
     */
    explicit Line(QPen pen, QBrush brush, Coord coord, QPoint p1, QPoint p2);
    //!Draws the line onto the canvas
    /*!
 * utilizes qPainter object to set the brush and the pen, ans uses p1 and p2 to draw the line
 * based on their positions.
 * @param device device used to
 */
    void Draw(QPaintDevice *device) override;
    //!Moves the line to a different location using coordinates
    /*!
     *
     * @param coord new coordinates for the line
     */
    void Move(Coord coord) override;
    //!Calculates the area of the line
    /*!
     * Lines do not have an area, so the function returns 0 when this is called
     * @return 0
     */
    double Area() override;
    //! Calculates the Perimeter of the line
    /*!
     * Line do not have a perimeter, so the function returns 0 when this is called
     * @return 0
     */
    double Perimeter() override;
    //! sets the x and y coordinates of the starting point of the line.
    /*!
     * uses parameters x and y to utilizes QPoint::setX() and QPoint::setY() to set the coordinates for p1
     * @param x represents the x coordinate
     * @param y represents the y coordinate
     */
    void SetPointOne(int x, int y);
    //! sets the x and y coordinates of the ending point of the line.
    /*!
     * uses parameters x and y to utilizes QPoint::setX() and QPoint::setY() to set the coordinates for p2
     * @param x represents the x coordinate
     * @param y represents the y coordinate
     */
    void SetPointTwo(int x, int y);

private:
    QPoint p1; /*!< starting point of the line*/
    QPoint p2; /*!< ending point of the line*/
};
