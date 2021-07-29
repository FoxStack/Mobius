#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include "./UI/Testimonial/List/testimoniallistview.h"
#include "RenderArea/RenderArea.h"
#include <QList>
#include <QtGui>
#include <QComboBox>
#include <QLineEdit>
#include <QColor>

enum eShape {RECTANGLE, ELLIPSE, LINE, POLYGON, POLYLINE, TEXT};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
        {
    Q_OBJECT

        public:
            MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    private slots:
            void on_loginBut_clicked();

    void on_showTestimonialButton_clicked();

    void on_contactButton_clicked();

    void on_actionRectangle_triggered();

    void on_actionEllipse_triggered();

    void on_actionPolygon_triggered();

    void on_actionPolyLine_triggered();

    void on_actionLine_triggered();

    void on_actionText_triggered();

    void ChangeShapeBrush();

    void ChangeShapePen();

    void changeShape();

    void ChangeCoordinate();

    //    void RectangleDimensions();

private:
    Ui::MainWindow *ui;
    TestimonialListView *testimonialView;
    RenderArea *renderArea;

    QList<QTreeWidgetItem *> items;
    QTreeWidgetItem *shapes = new QTreeWidgetItem;
    QTreeWidgetItem *lines = new QTreeWidgetItem; //Add a lines parent
    QTreeWidgetItem *text = new QTreeWidgetItem;
    QTreeWidgetItem *shapesBrushColor = new QTreeWidgetItem;
    QTreeWidgetItem *shapesBrushStyle = new QTreeWidgetItem;
    QTreeWidgetItem *shapesPenCapStyle = new QTreeWidgetItem;
    QTreeWidgetItem *shapesPenColor = new QTreeWidgetItem;
    QTreeWidgetItem *shapesPenStyle = new QTreeWidgetItem;
    QTreeWidgetItem *shapesPenJoinStyle = new QTreeWidgetItem;
    QTreeWidgetItem *shapesPenWidth = new QTreeWidgetItem;
    QComboBox *shapesComboBoxBrushColor = new QComboBox;
    QComboBox *shapesComboBoxBrushStyle = new QComboBox;
    QComboBox *shapesComboBoxPenCapStyle = new QComboBox;
    QComboBox *shapesComboBoxPenColor = new QComboBox;
    QComboBox *shapesComboBoxPenStyle = new QComboBox;
    QComboBox *shapesComboBoxPenJoinStyle = new QComboBox;
    QLineEdit *shapesLineEditPenWidth = new QLineEdit;
    QTreeWidgetItem *textString = new QTreeWidgetItem;
    QTreeWidgetItem *textColor = new QTreeWidgetItem;
    QTreeWidgetItem *textAlignment = new QTreeWidgetItem;
    QTreeWidgetItem *textPointSize = new QTreeWidgetItem;
    QTreeWidgetItem *textFontFamily = new QTreeWidgetItem;
    QTreeWidgetItem *textFontStyle = new QTreeWidgetItem;
    QTreeWidgetItem *textFontWeight = new QTreeWidgetItem;
    QLineEdit *lineEditTextString = new QLineEdit;
    QComboBox *comboBoxTextColor = new QComboBox;
    QComboBox *comboBoxTextAlignment = new QComboBox;
    QLineEdit *lineEditTextPointSize = new QLineEdit;
    QComboBox *comboBoxTextFontFamily = new QComboBox;
    QComboBox *comboBoxTextFontStyle = new QComboBox;
    QComboBox *comboBoxTextFontWeight = new QComboBox;
    // -------------------------------------------------------------------------------------
    QList<QTreeWidgetItem *> shapeItems;
    QTreeWidgetItem *rectangleT2 = new QTreeWidgetItem;
    QTreeWidgetItem *ellipseT2 = new QTreeWidgetItem;
    QTreeWidgetItem *polygonT2 = new QTreeWidgetItem;
    QTreeWidgetItem *polylineT2 = new QTreeWidgetItem;
    QTreeWidgetItem *lineT2 = new QTreeWidgetItem;
    QTreeWidgetItem *textT2 = new QTreeWidgetItem;

    QTreeWidgetItem *rectangleWidth = new QTreeWidgetItem;
    QTreeWidgetItem *rectangleLength = new QTreeWidgetItem;
    QLineEdit *rectangleEditWidth = new QLineEdit;
    QLineEdit *rectangleEditLength = new QLineEdit;

    QTreeWidgetItem *ellipseMajorAxis = new QTreeWidgetItem;
    QTreeWidgetItem *ellipseMinorAxis = new QTreeWidgetItem;
    QLineEdit *ellipseEditMajor = new QLineEdit;
    QLineEdit *ellipseEditMinor = new QLineEdit;

    QTreeWidgetItem *polygonPoint = new QTreeWidgetItem;
    QLineEdit *polygonEditPoint = new QLineEdit;

    QTreeWidgetItem *linePoint1 = new QTreeWidgetItem;
    QTreeWidgetItem *linePoint2 = new QTreeWidgetItem;
    QLineEdit *lineEditPoint1 = new QLineEdit;
    QLineEdit *lineEditPoint2 = new QLineEdit;


    int x = 5;
    int y = 5;
    int width = 100;
    int length = 100;
};
#endif // MAINWINDOW_H
