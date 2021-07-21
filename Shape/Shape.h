#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>

struct Coord {
  int x;
  int y;
};

class Shape : public QPainter {
public:
  explicit Shape(QPaintDevice *device);
  virtual ~Shape();

  virtual void Draw() = 0;
  virtual void Move(Coord coord) = 0;
  virtual double Perimeter() = 0;
  virtual double Area() = 0;

  QBrush GetBrush();
  void SetBrush(Qt::GlobalColor color, Qt::BrushStyle style);

  QPen GetPen();
  void SetPen(const QBrush &brush, Qt::GlobalColor color, int width,
              Qt::PenStyle style, Qt::PenCapStyle cap, Qt::PenJoinStyle join);
  QPainter *GetPainter() const;

  bool operator==(const Shape &other) const;
  bool operator<(const Shape &other) const;
  bool operator>(const Shape &other) const;

protected:
  QPaintDevice *qPaintDevice{};
  QPainter *qPainter{};
  QPen qPen;
  QBrush qBrush;
  int id{};
  Coord shapeCoord{};

private:
};

#endif // SHAPE_H
