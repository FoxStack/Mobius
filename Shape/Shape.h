#pragma once

#include <QPainter>
#include <QPainterPath>

struct Coord {
    int x;
    int y;
};

class Shape : public QPainter {
public:

    explicit Shape(QPen pen, QBrush brush, Coord coord);
    virtual ~Shape();

    virtual void Draw(QPaintDevice *device) = 0;
    virtual void Move(Coord coord) = 0;
    virtual double Perimeter() = 0;
    virtual double Area() = 0;

    void SetCoord(int x, int y);
    int  GetId();
    QBrush GetBrush();
    void SetBrush(Qt::GlobalColor color, Qt::BrushStyle style);

    QPen GetPen();
    void SetPen(const QBrush &brush, Qt::GlobalColor color, int width,
                Qt::PenStyle style, Qt::PenCapStyle cap, Qt::PenJoinStyle join);

    bool operator==(const Shape &other) const;
    bool operator<(const Shape &other) const;
    bool operator>(const Shape &other) const;

protected:
    QPaintDevice *qPaintDevice{};
    QPainter     *qPainter{};
    QBrush        qBrush;
    QPen          qPen;
    Coord         shapeCoord{};
    int           id = 0;

private:
    static int numOfShapes;
};
