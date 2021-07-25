#ifndef TEXT_H
#define TEXT_H
#include "Shape.h"


class Text : public Shape
{
public:
    explicit Text(QPaintDevice *device);
    ~Text();
    void Draw() override;
    void Move(Coord coord) override;
    double Area() override;
    double Perimeter() override;

    void SetDimensions(int width, int length);
    void SetCoord(int x, int y);
    void SetString(QString string);
    void SetFontFamily(QString fontFamily);
    void SetFontSize(int fSize);
    void SetFontStyle(QFont::Style style);
    void SetFontWeight(QFont::Weight weight);
    void SetTextAlignment(Qt::AlignmentFlag alignment);
    void SetTextColor(Qt::GlobalColor textColor);

private:
    int l{};
    int w{};
    Coord textCoord{};
    QString str{};
    QFont font{};
    Qt::AlignmentFlag alignmentFlag{};
};


#endif // TEXT_H
