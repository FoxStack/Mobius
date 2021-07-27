#include <QtGui>
#include "RenderArea.h"

RenderArea::RenderArea(QWidget *parent)
        : QWidget(parent)
{
//    pixmap.load(":/images/qt-logo.png");

    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

void RenderArea::setShape(eShape shape)
{
    this->shape = shape;
    update();
}

void RenderArea::setPen(const QPen &pen)
{
    this->pen = pen;
    update();
}

void RenderArea::setBrush(const QBrush &brush)
{
    this->brush = brush;
    update();
}

void RenderArea::AddShape(eShape newShape){
    switch(newShape)
    {
        case RECTANGLE:
            rectangle = new Rectangle(pen, brush, {5, 5}, 100, 100);
            shapeList.push_back(rectangle);

            break;

        case ELLIPSE:
            ellipse = new Ellipse(pen, brush, {5, 5}, 50, 100);
            shapeList.push_back(ellipse);
            break;

//        case POLYGON:
//            polygon = new Polygon;
//            shapeList.push_back(polygon);
//            break;

//        case POLYLINE:
//            polyline = new Polyline;
//            shapeList.push_back(polyline);
//            break;

        case LINE:
            line = new Line(pen, brush, {0, 0}, QPoint(10, 10), QPoint(100, 100));
            shapeList.push_back(line);
            break;
        case TEXT:
            break;
    }
    update();
}

//auto* RenderArea::GetShape(int id){
//    for (Shape *thisShape: shapeList) {
//        if(thisShape->GetId() == id)
//            return thisShape;
//    }
//}

void RenderArea::paintEvent(QPaintEvent *event)
{
    for (Shape *thisShape: shapeList) {
        thisShape->Draw(this);
    }
}
