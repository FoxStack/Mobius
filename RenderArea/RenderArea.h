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
    void setShape(RenderArea::eShape shape);
    void setPen(const QPen &pen);
    void setBrush(const QBrush &brush);

    void AddShape(eShape newShape);
//    auto* GetShape(int id);
    void paintEvent(QPaintEvent *event) override;

//protected:

private:
    eShape shape;
    Vector<Shape *> shapeList;
    Rectangle *rectangle;
    Ellipse *ellipse;
//    Polygon *polygon;
    Polyline *polyline;
    Line *line;
    QPen pen;
    QBrush brush;
};
