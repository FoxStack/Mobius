#pragma once

#include "../Shape.h"
#include "../../Vector/Vector.hpp"
//!Polygon Class
/*!
 * derived from shape class, holds the properties
 * for a random polygon
 */
class Polygon: public Shape
{
public:
    //!Polygon Constructor
    /*!
     * initializes the pen, brush, coordinates/location, and all the points
     * for the polygon
     * @param pen type/color/style of pen
     * @param brush type/color/style of brush
     * @param coord coordinates of the polygon
     * @param points list of points for the polygon
     */
    explicit Polygon(QPen pen, QBrush brush, Coord coord, Vector<QPoint> points);
    //! Polygon destructor
    ~Polygon() override= default;
    //! Draws the polygon onto the canvas
    /*!
     * creates a QPolygon object and adds each point to the object,
     * and connects each consecutive point with a created path, using the
     * preset brush and pen.
     * @param device uses this device to draw the polygon
     */
    void Draw(QPaintDevice *device) override;
    //!Moves the location of the polygon point by point.
    /*!
     * Uses QPoint object to temporarily hold each of the points in the pointList
     * object and to set them onto the canvas.
     * @param coord holds the coordinates of the shape
     */
    void Move(Coord coord) override;
    //! Calculates the area of the polygon
    /*!
     * This program cannot find the area of a random polygon so this function
     * returns 0
     * @return 0
     */
    double Area() override;
    //! Calculates perimeter of polygon
    /*!
     * This program cannot find the perimeter of a random polygon so this function
     * returns 0
     * @return
     */
    double Perimeter() override;
    //! Adds a point to the polygon
    /*!
     * takes a qPoint passed in as a parameter and adds it to the
     * pointList object
     * @param qPoint holds the new point to add to the list
     */
    void AddPoint(QPoint qPoint);

private:
    Vector<QPoint> pointList; /*!< Holds all the points for the polygon*/
};
