    #pragma once

#include <QBrush>
#include <QPen>
#include <QWidget>
#include "../Shape/Polyline/Polyline.h"
#include "../Shape/Polygon/Polygon.h"
#include "../Shape/Ellipse/Ellipse.h"
#include "../Shape/Line/Line.h"
#include "../Shape/Rectangle/Rectangle.h"
#include "../Shape/Shape.h"
#include "../Vector/Vector.hpp"

class RenderArea : public QWidget
{
Q_OBJECT

public:
    enum eShape {RECTANGLE, ELLIPSE, LINE, POLYGON, POLYLINE, TEXT};

    RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

public slots:
    void setPen(const QPen &pen);
    QPen getDefaultPen();
    void setBrush(const QBrush &brush);
    QBrush getDefaultBrush();
    void setCurrentShapeId(int id);

    void AddShape(Shape* shape);

    void move(int x ,int y);
    void paintEvent(QPaintEvent *event) override;

private:
    int id;
    Vector<Shape *> shapeList;
    Vector<Rectangle *> rectList;
    Vector<Ellipse *> ellipseList;
    Vector<Polygon *> polygonList;
    Vector<Polyline *> polylineList;
    Vector<Line *> lineList;
//    Vector<Text *> textList;

    Rectangle *rectangle;
    Ellipse *ellipse;
    Polygon *polygon;
    Polyline *polyline;
    Line *line;
    QPen pen;
    QBrush brush;
};
