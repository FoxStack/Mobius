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
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
, ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    renderArea = new RenderArea;
    renderArea = ui->frame;
    ui->frame->setBrush(Qt::blue);
    ui->frame->setPen(QPen(Qt::red));
    testimonialView = nullptr;

    // SETTING UP TREE WIDGET
    ui->treeWidget->setColumnCount(2);//Set the column
    ui->ShapeTree->setColumnCount(2);
    //ui->treeWidget->setHeaderHidden(true);
    ui->treeWidget->setHeaderLabels(QStringList() <<"Feature"<<"Value");
    ui->ShapeTree->setHeaderLabels(QStringList() << "Shape" << "Property");

    shapes->setText(0,"Shape");
    items.append(shapes);

    text->setText(0, "Text");
    items.append(text);

    rectangleT2->setText(0, "Rectangle");
    shapeItems.append(rectangleT2);

    ellipseT2->setText(0, "Ellipse");
    shapeItems.append(ellipseT2);

    polygonT2->setText(0, "Polygon");
    shapeItems.append(polygonT2);

    polylineT2->setText(0, "Polyline");
    shapeItems.append(polylineT2);

    lineT2->setText(0, "Line");
    shapeItems.append(lineT2);

    textT2->setText(0, "Text");
    shapeItems.append(textT2);

    ui->treeWidget->insertTopLevelItems(0, items);
    ui->ShapeTree->insertTopLevelItems(0, shapeItems);
    shapes->setHidden(false);//Setting hidden
    lines->setHidden(false);//Setting to hide
    rectangleT2->setHidden(false);
    ellipseT2->setHidden(false);
    polygonT2->setHidden(false);
    polylineT2->setHidden(false);
    lineT2->setHidden(false);
    textT2->setHidden(false);

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

    shapesComboBoxBrushColor->addItem(tr("Black"), QBrush(Qt::black));
    shapesComboBoxBrushColor->addItem(tr("Blue"), QBrush(Qt::blue));
    shapesComboBoxBrushColor->addItem(tr("Cyan"), QBrush(Qt::cyan));
    shapesComboBoxBrushColor->addItem(tr("Green"), QBrush(Qt::green));
    shapesComboBoxBrushColor->addItem(tr("Gray"), QBrush(Qt::gray));
    shapesComboBoxBrushColor->addItem(tr("Magenta"), QBrush(Qt::magenta));
    shapesComboBoxBrushColor->addItem(tr("Red"), QColor(Qt::red));
    shapesComboBoxBrushColor->addItem(tr("White"), QBrush(Qt::white));
    shapesComboBoxBrushColor->addItem(tr("Yellow"), QBrush(Qt::yellow));
    ui->treeWidget->setItemWidget(shapesBrushColor, 1, shapesComboBoxBrushColor);

    shapesComboBoxBrushStyle->addItem(tr("Solid"), QBrush(Qt::SolidPattern));
    shapesComboBoxBrushStyle->addItem(tr("Dense1"), QBrush(Qt::Dense1Pattern));
    shapesComboBoxBrushStyle->addItem(tr("Dense2"), QBrush(Qt::Dense2Pattern));
    shapesComboBoxBrushStyle->addItem(tr("Dense3"), QBrush(Qt::Dense3Pattern));
    shapesComboBoxBrushStyle->addItem(tr("Dense4"), QBrush(Qt::Dense4Pattern));
    shapesComboBoxBrushStyle->addItem(tr("Dense5"), QBrush(Qt::Dense5Pattern));
    shapesComboBoxBrushStyle->addItem(tr("Dense6"), QBrush(Qt::Dense6Pattern));
    shapesComboBoxBrushStyle->addItem(tr("Dense7"), QBrush(Qt::Dense7Pattern));
    shapesComboBoxBrushStyle->addItem(tr("Hor"), QBrush(Qt::HorPattern));
    shapesComboBoxBrushStyle->addItem(tr("Ver"), QBrush(Qt::VerPattern));
    shapesComboBoxBrushStyle->addItem(tr("Cross"), QBrush(Qt::CrossPattern));
    shapesComboBoxBrushStyle->addItem(tr("BDiag"), QBrush(Qt::BDiagPattern));
    shapesComboBoxBrushStyle->addItem(tr("FDiag"), QBrush(Qt::FDiagPattern));
    shapesComboBoxBrushStyle->addItem(tr("BDiag"), QBrush(Qt::BDiagPattern));
    shapesComboBoxBrushStyle->addItem(tr("DiagCross"), QBrush(Qt::DiagCrossPattern));
    shapesComboBoxBrushStyle->addItem(tr("None"),  QBrush(Qt::NoBrush));
    ui->treeWidget->setItemWidget(shapesBrushStyle, 1, shapesComboBoxBrushStyle);


    shapesComboBoxPenColor->addItem(tr("Black"), QPen(Qt::black));
    shapesComboBoxPenColor->addItem(tr("Blue"), QPen(Qt::blue));
    shapesComboBoxPenColor->addItem(tr("Cyan"), QPen(Qt::cyan));
    shapesComboBoxPenColor->addItem(tr("Green"), QPen(Qt::green));
    shapesComboBoxPenColor->addItem(tr("Gray"), QPen(Qt::gray));
    shapesComboBoxPenColor->addItem(tr("Magenta"), QPen(Qt::magenta));
    shapesComboBoxPenColor->addItem(tr("Red"), QPen(Qt::red));
    shapesComboBoxPenColor->addItem(tr("White"), QPen(Qt::white));
    shapesComboBoxPenColor->addItem(tr("Yellow"), QPen(Qt::yellow));
    ui->treeWidget->setItemWidget(shapesPenColor, 1, shapesComboBoxPenColor);

    shapesComboBoxPenStyle->addItem(tr("Solid"), QPen(Qt::SolidLine));
    shapesComboBoxPenStyle->addItem(tr("Dash"), QPen(Qt::DashLine));
    shapesComboBoxPenStyle->addItem(tr("Dot"), QPen(Qt::DotLine));
    shapesComboBoxPenStyle->addItem(tr("Dash-Dot"), QPen(Qt::DashDotLine));
    shapesComboBoxPenStyle->addItem(tr("Dash-Dot-Dot"), QPen(Qt::DashDotDotLine));
    shapesComboBoxPenStyle->addItem(tr("Custom Dash"), QPen(Qt::CustomDashLine));
    shapesComboBoxPenStyle->addItem(tr("None"), QPen(Qt::NoPen));
    ui->treeWidget->setItemWidget(shapesPenStyle, 1, shapesComboBoxPenStyle);

    shapesComboBoxPenCapStyle->addItem(tr("Flat"), QPen(Qt::FlatCap));
    shapesComboBoxPenCapStyle->addItem(tr("Square"), QPen(Qt::SquareCap));
    shapesComboBoxPenCapStyle->addItem(tr("Round"), QPen(Qt::RoundCap));
    shapesComboBoxPenCapStyle->addItem(tr("M Cap"), QPen(Qt::MPenCapStyle));
    ui->treeWidget->setItemWidget(shapesPenCapStyle, 1, shapesComboBoxPenCapStyle);

    shapesComboBoxPenJoinStyle->addItem("Miter", QPen(Qt::MiterJoin));
    shapesComboBoxPenJoinStyle->addItem("Round", QPen(Qt::RoundJoin));
    shapesComboBoxPenJoinStyle->addItem("Miter", QPen(Qt::MiterJoin));
    shapesComboBoxPenJoinStyle->addItem("Svg Miter", QPen(Qt::SvgMiterJoin));
    shapesComboBoxPenJoinStyle->addItem("M Pen", QPen(Qt::MPenJoinStyle));
    ui->treeWidget->setItemWidget(shapesPenJoinStyle, 1, shapesComboBoxPenJoinStyle);

    ui->treeWidget->setItemWidget(shapesPenWidth, 1, shapesLineEditPenWidth);


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


    rectangleWidth->setText(0, "Width");
    rectangleLength->setText(0, "Length");
    rectangleT2->addChild(rectangleWidth);
    rectangleT2->addChild(rectangleLength);
    ui->ShapeTree->setItemWidget(rectangleWidth, 1, rectangleEditWidth);
    ui->ShapeTree->setItemWidget(rectangleLength, 1, rectangleEditLength);

    ellipseMajorAxis->setText(0, "Major Axis");
    ellipseMinorAxis->setText(0, "Minor Axis");
    ellipseT2->addChild(ellipseMajorAxis);
    ellipseT2->addChild(ellipseMinorAxis);
    ui->ShapeTree->setItemWidget(ellipseMajorAxis, 1, ellipseEditMajor);
    ui->ShapeTree->setItemWidget(ellipseMinorAxis, 1, ellipseEditMinor);

    polygonPoint->setText(0, "Point");
    polygonT2->addChild(polygonPoint);
    ui->ShapeTree->setItemWidget(polygonPoint, 1, polygonEditPoint);

    linePoint1->setText(0, "Point 1");
    linePoint2->setText(0, "Point 2");
    lineT2->addChild(linePoint1);
    lineT2->addChild(linePoint2);
    ui->ShapeTree->setItemWidget(linePoint1, 1, lineEditPoint1);
    ui->ShapeTree->setItemWidget(linePoint2, 1, lineEditPoint2);





    connect(shapesComboBoxBrushColor, SIGNAL(activated(int)),
            this, SLOT(ChangeShapeBrush()));
    connect(shapesComboBoxBrushStyle, SIGNAL(activated(int)),
            this, SLOT(ChangeShapeBrush()));

    connect(shapesComboBoxPenColor, SIGNAL(activated(int)),
            this, SLOT(ChangeShapePen()));
    connect(shapesComboBoxPenStyle, SIGNAL(activated(int)),
            this, SLOT(ChangeShapePen()));
    connect(shapesComboBoxPenCapStyle, SIGNAL(activated(int)),
            this, SLOT(ChangeShapePen()));
    connect(shapesComboBoxPenJoinStyle, SIGNAL(activated(int)),
            this, SLOT(ChangeShapePen()));
    connect(shapesLineEditPenWidth, SIGNAL(textChanged(const QString &)),
            this, SLOT(ChangeShapePen()));

    connect(ui->x, SIGNAL(textChanged(const QString &)),
            this, SLOT(ChangeCoordinate()));
    connect(ui->y, SIGNAL(textChanged(const QString &)),
            this, SLOT(ChangeCoordinate()));

    connect(ui->AllShape, SIGNAL(activated(int)),
            this, SLOT(changeShape()));

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


void MainWindow::on_actionRectangle_triggered()
{
    Rectangle *rectangle = new Rectangle(renderArea->getDefaultPen(), renderArea->getDefaultBrush(), {5, 5}, 100, 100);
    ui->frame->setCurrentShapeId(rectangle->GetId());
    ui->frame->AddShape(rectangle);
    ui->AllShape->insertItem(rectangle->GetId(), "Rectangle " + QString::number(rectangle->GetId()));
}


void MainWindow::on_actionEllipse_triggered()
{
    Ellipse *ellipse = new Ellipse(renderArea->getDefaultPen(), renderArea->getDefaultBrush(), {100, 100}, 100, 50);
    ui->frame->setCurrentShapeId(ellipse->GetId());
    ui->frame->AddShape(ellipse);
    ui->AllShape->insertItem(ellipse->GetId(), "Ellipse " + QString::number(ellipse->GetId()));
}


void MainWindow::on_actionPolygon_triggered()
{
    Vector<QPoint> points;
    points.push_back(QPoint(100, 100));
    points.push_back(QPoint(10, 50));
    points.push_back(QPoint(150, 200));
    Polygon *polygon = new Polygon(renderArea->getDefaultPen(), renderArea->getDefaultBrush(), {5, 5}, points);
    ui->frame->setCurrentShapeId(polygon->GetId());
    ui->frame->AddShape(polygon);
    ui->AllShape->insertItem(polygon->GetId(), "Polygon " + QString::number(polygon->GetId()));
}


void MainWindow::on_actionPolyLine_triggered()
{

}


void MainWindow::on_actionLine_triggered()
{
    Line *line = new Line(renderArea->getDefaultPen(), renderArea->getDefaultBrush(), {5, 5}, QPoint(10, 10), QPoint(100, 100));
    ui->frame->setCurrentShapeId(line->GetId());
    ui->frame->AddShape(line);
    ui->AllShape->insertItem(line->GetId(), "Line " + QString::number(line->GetId()));
}


void MainWindow::on_actionText_triggered()
{

}

// ---------------------------------------------------------------------------
void MainWindow::changeShape()
{
    int id = ui->AllShape->currentIndex();
    ui->frame->setCurrentShapeId(id);
}

void MainWindow::ChangeCoordinate()
{
    x = ui->x->text().toInt();
    y = ui->y->text().toInt();

    ui->frame->move(x, y);
}

void MainWindow::ChangeShapePen()
{
    QColor color = shapesComboBoxPenColor->currentData().value<QPen>().color();
    Qt::PenStyle style = shapesComboBoxPenStyle->currentData().value<QPen>().style();
    Qt::PenCapStyle capStyle = shapesComboBoxPenCapStyle->currentData().value<QPen>().capStyle();
    Qt::PenJoinStyle joinStyle = shapesComboBoxPenJoinStyle->currentData().value<QPen>().joinStyle();
    int width = shapesLineEditPenWidth->text().toInt();
    ui->frame->setPen(QPen(color, width, style, capStyle, joinStyle));
}

void MainWindow::ChangeShapeBrush()
{
    QColor color = shapesComboBoxBrushColor->currentData().value<QBrush>().color();
    Qt::BrushStyle style = shapesComboBoxBrushStyle->currentData().value<QBrush>().style();
    ui->frame->setBrush(QBrush(color, style));
}

