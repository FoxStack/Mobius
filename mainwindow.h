#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include "./UI/Testimonial/List/testimoniallistview.h"
#include <QList>
#include <QtGui>
#include <QtCore>
#include <QComboBox>
#include <QLineEdit>

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

private:
    Ui::MainWindow *ui;
    TestimonialListView *testimonialView;

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
    QTreeWidgetItem *linesPenCapStyle = new QTreeWidgetItem;
    QTreeWidgetItem *linesPenColor = new QTreeWidgetItem;
    QTreeWidgetItem *linesPenStyle = new QTreeWidgetItem;
    QTreeWidgetItem *linesPenJoinStyle = new QTreeWidgetItem;
    QTreeWidgetItem *linesPenWidth = new QTreeWidgetItem;
    QComboBox *linesComboBoxPenCapStyle = new QComboBox;
    QComboBox *linesComboBoxPenColor = new QComboBox;
    QComboBox *linesComboBoxPenStyle = new QComboBox;
    QComboBox *linesComboBoxPenJoinStyle = new QComboBox;
    QLineEdit *linesLineEditPenWidth = new QLineEdit;
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

};
#endif // MAINWINDOW_H
