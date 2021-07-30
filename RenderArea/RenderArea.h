#pragma once

#include "../Shape/Ellipse/Ellipse.h"
#include "../Shape/Line/Line.h"
#include "../Shape/Polygon/Polygon.h"
#include "../Shape/Polyline/Polyline.h"
#include "../Shape/Rectangle/Rectangle.h"
#include "../Shape/Shape.h"
#include "../Shape/Text/Text.h"
#include "../Vector/Vector.hpp"
#include <QBrush>
#include <QPen>
#include <QWidget>
//! RenderArea Class
/*!
 * derived from QWidget, renders the area for the shapes to be drawn on
 */
class RenderArea : public QWidget {
  Q_OBJECT

public:

    //!Enum.
    enum eShape {RECTANGLE, /*!< Enum value representing Rectangle*/
        ELLIPSE,   /*!< Enum Value representing Ellipse*/
        LINE,      /*!< Enum Value representing Line*/
        POLYGON,   /*!< Enum value representing Polygon*/
        POLYLINE,  /*!< Enum value representing Polyline*/
        TEXT};     /*!< Enum value representing Text*/
    //!Constructor.
    /*!
     * sets the background to blank
     * @param parent
     */
  RenderArea(QWidget *parent = nullptr);

    //!Sets the minimum size
    QSize minimumSizeHint() const override;
    //!Sets the normal size
    QSize sizeHint() const override;

public slots:
//!Sets the pen properties to those passed in through pen parameter
/*!
 * @param pen The pen used to set this->pen properties
 */
  void setPen(const QPen &pen);
  //! Gets the default pen properties chosen by QPen()
  QPen getDefaultPen();
  //!Sets the brush properties to those passed in through brush parameter
    /*!
     *
     * @param brush holds the properties assigned to this
     */
  void setBrush(const QBrush &brush);
    //! Gets the default brush properties chosen by QBrush();
  QBrush getDefaultBrush();
    //!Shape Id passed in is assigned to the class Id. Update it
    /*!
     *
     * @param id holds the id for the shape to be shown on the area
     */
  void setCurrentShapeId(int id);
  //!Sets the text to be drawn
  /*!
   *
   * @param string text to draw
   */
  void setText(QString string);
  //!Sets color of pen or brush
  /*!
   *
   * @param color the color to set
   */
  void setColor(QColor color);
  //    void setAlignment(Qt::Alignment alignment);
    //!Adds a shape to the shapeList.
    /*!
     * Uses a shape that is passed in as a parameter and adds it
     * to the shapeList vector
     * @param shape holds properties of new shape to add
     */
  void AddShape(Shape *shape);
  /*!
   * adds text to the textList
   * @param text text properties that are added
   */
  void AddText(Text *text);
    //!Moves a shape on the canvas
    /*!
     * passes in x and y coordinates, goes through the current shapeList using a range for loop
     * and checks which shape matches the id of the current shape, and if it does, will move that
     * shape using the x and y coordinates
     * @param x x coordinate for new position
     * @param y y coordinate for new position
     */
  void move(int x, int y);
    //!Draws the shape onto the area
    /*!
     * Takes each shape in the shapeList and draws it on the area
     * @parem pointing to the area.
     */
  void paintEvent(QPaintEvent *event) override;

private:
    int id; /*!< id of shape*/
    Vector<Shape *> shapeList; /*!< List of shapes*/
  Vector<Text *> textList; /*!< List of texts*/

    Rectangle *rectangle; /*!< pointer of Rectangle class*/
    Ellipse *ellipse; /*!< pointer of Ellipse class*/
    Polygon *polygon; /*!< pointer of Polygon class*/
    Polyline *polyline; /*!< pointer of Polyline class*/
    Line *line; /*!< pointer of Line class*/
    QPen pen; /*!< properties of the pen for the rendered area */
    QBrush brush; /*!< properties of the brush for the rendered areas*/
};
