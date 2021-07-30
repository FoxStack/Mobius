#pragma once

#include <QPainter>
#include <QPainterPath>
/*!
 * struct representing coordinates for the shape.
 */
struct Coord {
    int x; /*!< X coordinate for shape*/
    int y; /*!< Y coordinate for shape*/
};
//!Shape Class
/*!
 * Derived from QPainter, is an abstract base class
 * representing different shapes used throughout the program
 */
class Shape : public QPainter {
public:
    //! Shape constructor
    /*!
     * initializes pen, brush, and coordinates for the shape
     * @param pen style/type/color of pen
     * @param brush style/type/color of brush
     * @param coord coordinates of shape
     */
    explicit Shape(QPen pen, QBrush brush, Coord coord);
    //! Shape destructor
    virtual ~Shape();
    //!Draws the shape
    /*!
     * This function is pure virtual, so it is only utilized by classes
     * inheriting this class
     * @param device
     */
    virtual void Draw(QPaintDevice *device) = 0;
    //! Moves the shape
    /*!
     * the function is pure virtual, so it is only utilized by classes
     * inheriting this class
     * @param coord coordinates of the shape
     */
    virtual void Move(Coord coord) = 0;
    //! Calculates the perimeter of the shape
    /*!
     * the function is pure virtual, so it is only utilized by classes
     * inheriting this class
     * @return the perimeter of the shape
     */
    virtual double Perimeter() = 0;
    //! Calculates the area of the shape
    /*!
     * the function is pure virtual, so it is only utilized by classes
     * inheriting this class
     * @return the area of the shape
     */
    virtual double Area() = 0;
    //!Sets the coordinates for the shape
    /*!
     * using parameters, will reset the coordinates to the shape.
     * @param x new x coordinate
     * @param y new y coordinate
     */
    void SetCoord(int x, int y);
    //!Returns the shape's ID (id)
    int  GetId();
    //! Changes the color and style of qBrush.
    /*!
     * utilizes setColor and setStyle to reassign the color and style for qBrush
     * @param color new color for qBrush
     * @param style new style for qBrush
     */
    void setBrush(const QBrush &brush);
    //! sets all the different properties for qPen
    /*!
     * sets the brush, color, width, style, cap, and join of qPen object.
     * @param brush type of brush
     * @param color type of color
     * @param width type of width
     * @param style which style
     * @param cap which cap style
     * @param join which join style is used
     */
    void setPen(const QPen &pen);


    //! Overloaded == operator to compare Shape class id
    /*!
     * compares the id variable of the two objects, returns true if they are the same, false if they aren't the same
     * @param other represents right hand side object
     * @return true if objects are same, false if not
     */
    bool operator==(const Shape &other) const;
    //! Overloaded < operator to compare Shape class id.
    /*!
     * compares id variable of the two objects, returns true if the lh object is less than the other object, and false if not
     * @param other represents right hand side object
     * @return true if object id is less than other object id, false if not
     */
    bool operator<(const Shape &other) const;
    //! Overloaded operator for > operator to compare Shape class id.
    /*!
     * compares id variable of the two objects, returns true if the lh object is greater than the other object, and false if not
     * @param other represents right hand side object
     * @return true if object id is greater than other object id, false if not
     */
    bool operator>(const Shape &other) const;

protected:
    QPaintDevice *qPaintDevice{}; /*!< Device used to paint.*/
    QPainter     *qPainter{}; /*!< Painter object*/
    QBrush        qBrush; /*!< brush for the shape*/
    QPen          qPen; /*!< pen for the shape*/
    Coord         shapeCoord{}; /*!< coordinates of the shape*/
    int           id = 0; /*!< Id of shape*/

private:
    static int numOfShapes; /*! number of shapes that are on screen*/
};
