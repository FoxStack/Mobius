#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./UI/Login/login.h"
#include "./UI/Contact/contactus.h"
#include "./UI/Testimonial/Add/addtestimonialdialog.h"
#include "./UI/Testimonial/List/testimoniallistview.h"
#include <QList>
#include <QtCore>
#include <QtGui>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testimonialView = nullptr;

    // SETTING UP TREE WIDGET
    ui->treeWidget->setColumnCount(2);//Set the column
    //ui->treeWidget->setHeaderHidden(true);
    ui->treeWidget->setHeaderLabels(QStringList() <<"Feature"<<"Value");//Set the title

    shapes->setText(0,"Shape");
    items.append(shapes);

    lines->setText(0, "Line");
    items.append(lines);

    text->setText(0, "Text");
    items.append(text);

    ui->treeWidget->insertTopLevelItems(0, items);
    shapes->setHidden(false);//Setting hidden
    lines->setHidden(false);//Setting to hide

    // shapes
    shapesBrushColor->setText(0, "Brush Color");
    shapesBrushStyle->setText(0,"Brush Style");
    shapesPenCapStyle->setText(0, "Pen Cap Style");
    shapesPenColor->setText(0, "Pen Color");
    shapesPenStyle->setText(0, "Pen Style");
    shapesPenJoinStyle->setText(0, "Pen Join Style");
    shapesPenWidth->setText(0, "Pen Width");

    shapes->addChild(shapesBrushColor);
    shapes->addChild(shapesBrushStyle);
    shapes->addChild(shapesPenCapStyle);
    shapes->addChild(shapesPenColor);
    shapes->addChild(shapesPenStyle);
    shapes->addChild(shapesPenJoinStyle);
    shapes->addChild(shapesPenWidth);

    shapesComboBoxBrushColor->addItems(QStringList() << "Black" << "Blue" << "Cyan" << "Green" << "Gray" << "Magenta" << "Red" << "White" << "Yellow");
    ui->treeWidget->setItemWidget(shapesBrushColor, 1, shapesComboBoxBrushColor);

    shapesComboBoxBrushStyle->addItems(QStringList() << "Solid" << "Hor" << "Ver" << "None");
    ui->treeWidget->setItemWidget(shapesBrushStyle, 1, shapesComboBoxBrushStyle);

    shapesComboBoxPenCapStyle->addItems(QStringList() << "Flat" << "Square" << "Round");
    ui->treeWidget->setItemWidget(shapesPenCapStyle, 1, shapesComboBoxPenCapStyle);

    shapesComboBoxPenColor->addItems(QStringList() << "Black" << "Blue" << "Cyan" << "Yellow" << "Red" << "Green");
    ui->treeWidget->setItemWidget(shapesPenColor, 1, shapesComboBoxPenColor);

    shapesComboBoxPenStyle->addItems(QStringList() << "Solid" << "Dash" << "Dot" << "Dash Dot" << "Dash Dot Dot" << "None");
    ui->treeWidget->setItemWidget(shapesPenStyle, 1, shapesComboBoxPenStyle);

    shapesComboBoxPenJoinStyle->addItems(QStringList() << "Bevel" << "Miter" << "Round");
    ui->treeWidget->setItemWidget(shapesPenJoinStyle, 1, shapesComboBoxPenJoinStyle);

    ui->treeWidget->setItemWidget(shapesPenWidth, 1, shapesLineEditPenWidth);

    //lines
    linesPenCapStyle->setText(0, "Pen Cap Style");
    linesPenColor->setText(0, "Pen Color");
    linesPenStyle->setText(0, "Pen Style");
    linesPenJoinStyle->setText(0, "Pen Join Style");
    linesPenWidth->setText(0, "Pen Width");

    lines->addChild(linesPenCapStyle);
    lines->addChild(linesPenColor);
    lines->addChild(linesPenStyle);
    lines->addChild(linesPenJoinStyle);
    lines->addChild(linesPenWidth);

    linesComboBoxPenCapStyle->addItems(QStringList() << "Flat" << "Square" << "Round");
    ui->treeWidget->setItemWidget(linesPenCapStyle, 1, linesComboBoxPenCapStyle);

    linesComboBoxPenColor->addItems(QStringList() << "Black" << "Blue" << "Cyan" << "Yellow" << "Red" << "Green");
    ui->treeWidget->setItemWidget(linesPenColor, 1, linesComboBoxPenColor);

    linesComboBoxPenStyle->addItems(QStringList() << "Solid" << "Dash" << "Dot" << "Dash Dot" << "Dash Dot Dot" << "None");
    ui->treeWidget->setItemWidget(linesPenStyle, 1, linesComboBoxPenStyle);

    linesComboBoxPenJoinStyle->addItems(QStringList() << "Bevel" << "Miter" << "Round");
    ui->treeWidget->setItemWidget(linesPenJoinStyle, 1, linesComboBoxPenJoinStyle);

    ui->treeWidget->setItemWidget(linesPenWidth, 1, linesLineEditPenWidth);

    // text
    textString->setText(0, "Text String");
    textColor->setText(0,"Text Color");
    textAlignment->setText(0, "Text Alignment");
    textPointSize->setText(0, "Text PointSize");
    textFontFamily->setText(0, "Text Font Family");
    textFontStyle->setText(0, "Text Font Style");
    textFontWeight->setText(0, "Text Font Weight");

    text->addChild(textString);
    text->addChild(textColor);
    text->addChild(textAlignment);
    text->addChild(textPointSize);
    text->addChild(textFontFamily);
    text->addChild(textFontStyle);
    text->addChild(textFontWeight);

    ui->treeWidget->setItemWidget(textString, 1, lineEditTextString);

    comboBoxTextColor->addItems(QStringList() << "Solid" << "Hor" << "Ver" << "None");
    ui->treeWidget->setItemWidget(textColor, 1, comboBoxTextColor);

    comboBoxTextAlignment->addItems(QStringList() << "Flat" << "Square" << "Round");
    ui->treeWidget->setItemWidget(textAlignment, 1, comboBoxTextAlignment);

    ui->treeWidget->setItemWidget(textPointSize, 1, lineEditTextPointSize);

    comboBoxTextFontFamily->addItems(QStringList() << "Black" << "Blue" << "Cyan" << "Yellow" << "Red" << "Green");
    ui->treeWidget->setItemWidget(textFontFamily, 1, comboBoxTextFontFamily);

    comboBoxTextFontStyle->addItems(QStringList() << "Solid" << "Dash" << "Dot" << "Dash Dot" << "Dash Dot Dot" << "None");
    ui->treeWidget->setItemWidget(textFontStyle, 1, comboBoxTextFontStyle);

    comboBoxTextFontWeight->addItems(QStringList() << "Bevel" << "Miter" << "Round");
    ui->treeWidget->setItemWidget(textFontWeight, 1, comboBoxTextFontWeight);

    ui->treeWidget->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete testimonialView;

    delete shapesBrushColor;
    delete shapesBrushStyle;
    delete shapesPenCapStyle;
    delete shapesPenColor;
    delete shapesPenStyle;
    delete shapesPenJoinStyle;
    delete shapesPenWidth;
    delete shapesComboBoxBrushColor;
    delete shapesComboBoxBrushStyle;
    delete shapesComboBoxPenCapStyle;
    delete shapesComboBoxPenColor;
    delete shapesComboBoxPenStyle;
    delete shapesComboBoxPenJoinStyle;
    delete shapesLineEditPenWidth;
    delete linesPenCapStyle;
    delete linesPenColor;
    delete linesPenStyle;
    delete linesPenJoinStyle;
    delete linesPenWidth;
    delete linesComboBoxPenCapStyle;
    delete linesComboBoxPenColor;
    delete linesComboBoxPenStyle;
    delete linesComboBoxPenJoinStyle;
    delete linesLineEditPenWidth;
    delete textString;
    delete textColor;
    delete textAlignment;
    delete textPointSize;
    delete textFontFamily;
    delete textFontStyle;
    delete textFontWeight;
    delete lineEditTextString;
    delete comboBoxTextColor;
    delete comboBoxTextAlignment;
    delete lineEditTextPointSize;
    delete comboBoxTextFontFamily;
    delete comboBoxTextFontStyle;
    delete comboBoxTextFontWeight;
    delete shapes;
    delete lines;
    delete text;
    qDebug() << "mainwind destruct";
}

void setUpTreeWidget()
{

}

void MainWindow::on_loginBut_clicked()
{
    login userLogin;
    userLogin.setModal(true);
    userLogin.exec();
}

void MainWindow::on_contactButton_clicked()
{
    ContactUs contact;
    contact.setModal(true);
    contact.exec();
}

void MainWindow::on_showTestimonialButton_clicked()
{
    if(testimonialView != nullptr)
        delete testimonialView;

    testimonialView = new TestimonialListView;
    testimonialView->show();
}

