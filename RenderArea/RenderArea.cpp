#include <QtGui>
#include <iostream>
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

void RenderArea::setPen(const QPen &pen)
{
    this->pen = pen;
    for (Shape *thisShape: shapeList) {
        if(thisShape->GetId() == id) {
            thisShape->setPen(pen);
        }
    }
    update();
}

QPen RenderArea::getDefaultPen()
{
    return QPen();
}

void RenderArea::setBrush(const QBrush &brush)
{
    this->brush = brush;
    for (Shape *thisShape: shapeList) {
        if(thisShape->GetId() == id) {
            thisShape->setBrush(brush);
        }
    }
    update();
}

QBrush RenderArea::getDefaultBrush()
{
    return QBrush();
}

void RenderArea::setText(QString string){
    for (Text *thisText: textList)
    {
        if(thisText->GetId() == id){
            thisText->SetString(string);
        }
    }
    update();
}

void RenderArea::setColor(QColor color)
{
    for (Text *thisText: textList)
    {
        if(thisText->GetId() == id){
            thisText->SetTextColor(color);
        }
    }
    update();
}

//void RenderArea::setAlignment(Qt::Alignment alignment)
//{
//    for (Text *thisText: textList)
//    {
//        if(thisText->GetId() == id){
//            thisText->SetTextAlignment(alignment);
//        }
//    }
//    update();
//}

void RenderArea::move(int x ,int y)
{
    for (Shape *thisShape: shapeList) {
        if(thisShape->GetId() == id) {
            thisShape->Move({x, y});
        }
    }
    update();
}

void RenderArea::AddShape(Shape* shape){
    shapeList.push_back(shape);
    update();
}

void RenderArea::AddText(Text* text){
    textList.push_back(text);
    update();
}

void RenderArea::setCurrentShapeId(int id)
{
    this->id = id;
    update();
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    for (Shape *thisShape: shapeList) {
        thisShape->Draw(this);
    }
}
