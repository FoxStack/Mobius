#ifndef TEXT_H
#define TEXT_H
#include "../Shape.h"
//!Text Class.
/*!
 * Derived from Shape class
 */
class Text : public Shape
        {
public:
    //! Text constructor
    /*!
     * Initializes the pen type/color/style, brush type/color/style,
     * position/coordinates, and the string of text
     * @param pen type/color/style of pen
     * @param brush type/color/style of brush
     * @param coord coordinates/position of rectangle
     * @param string text to use
     */
    explicit Text(QPen pen, QBrush brush, Coord coord, QString string);
    //!Destructor
    ~Text() override;
    //! Draws the text onto the canvas.
    /*!
     * overrides Shape::Draw(), takes the font details (QFont::font), coordinates for the textbox (Coord::textCoord)
     * and alignment(Qt::AlignmentFlag::alignmentFlag) to place the text on the canvas
     */
    void Draw(QPaintDevice *device) override;
    //! Moves the text box to another location.
    /*!
     * override Shape::Move(), uses parameter coord to change the x and y coordinates of the textbox,
     * moving it to a different location.
     * @param coord contains the new x(coord.x) and y(coord.y) coordinates to assign to textCoord
     */
    void Move(Coord coord) override;
    //! Calculates the area of the textbox.
    /*!
     * finds the area of the textbox, which is treated as a rectangle, using l(length) and w(width). Multiplies the two
     * together and returns that value
     * @return area of the textbox
     */
    double Area() override;
    //! Calculates the perimeter of the textbox.
    /*!
     * overrides Shape::Perimeter(), treats the textbox as a rectangle and uses l(length) and w(width) to find the perimeter
     * adds l and w together and multiplies that value by 2
     * @return perimeter of the textbox
     */
    double Perimeter() override;
    //! Sets coordinates for the textbox.
    /*!
     * using x and y parameters, these values get assigned to the textCoord.x and textCoord.y values respectively,
     * changing the location of the textbox
     * @param x assigned to textCoord.x, represents x coordinate
     * @param y assigned to textCoord.y, represents y coordinate
     */
    void SetCoord(int x, int y);
    //! Changes the text of the textbox.
    /*!
     * Passes in a QString as a parameter to change the text.
     * @param string assigns the str value with the value stored in string
     */
    void SetString(QString string);
    //! Changes the font family of the text string.
    /*!
     * utilizes QFont::setFamily to change the font family using the variable passed in through the parameter
     * @param fontFamily contains the new font family type
     */
    void SetFontFamily(QString fontFamily);
    //! Changes the font size.
    /*!
     * Uses the parameter fSize to change the font size that is assigned in font
     * @param fSize contains new font size
     */
    void SetFontSize(int fSize);
    //! Changes the font style of the text.
    /*!
     * uses the style parameter to assign a new font style to the font object
     * @param style contains new font style that will be assigned to font object
     */
    void SetFontStyle(QFont::Style style);
    //! Changes the font weight
    /*!
     * changes the current font weight to the weight passed in through the parameter
     * @param weight contains the new font weight to assign to font object
     */
    void SetFontWeight(QFont::Weight weight);
    //! Changes the alignment of the text
    /*!
     * using the parameter alignment, changes the value of alignmentFlag, which changes the alignment
     * of the text
     * @param alignment contains the new alignment for the text.
     */
    void SetTextAlignment(Qt::Alignment alignment);
    //! Sets the text color
    /*!
     * sets the text of the color by setting QColor::color to the parameter color, and then setting that to the pen color
     * @param textColor contains the new color to assign as the text color
     */
    void SetTextColor(QColor textColor);

private:
    QString str{}; /*!< contains the string value of the text itself*/
    QFont font{}; /*!< contains all the properties for the font of the text*/
    Qt::Alignment alignmentFlag{}; /*!< contains the alignment of the text within the textbox*/
};


#endif // TEXT_H
