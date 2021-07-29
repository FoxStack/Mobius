#ifndef TEXT_H
#define TEXT_H
#include "../Shape.h"

class Text : public Shape
        {
public:
    explicit Text(QPen pen, QBrush brush, Coord coord, QString string);
    ~Text() override;
    void Draw(QPaintDevice *device) override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetCoord(int x, int y);
    void SetString(QString string);
    void SetFontFamily(QString fontFamily);
    void SetFontSize(int fSize);
    void SetFontStyle(QFont::Style style);
    void SetFontWeight(QFont::Weight weight);
    void SetTextAlignment(Qt::Alignment alignment);
    void SetTextColor(QColor textColor);

private:
    QString str{};
    QFont font{};
    Qt::Alignment alignmentFlag{};
};


#endif // TEXT_H
