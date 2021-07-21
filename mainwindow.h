#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "src/Shape/Ellipse/Ellipse.h"
#include "src/Shape/Line/Line.h"
#include "src/Shape/Rectangle/Rectangle.h"
#include "src/Shape/Shape.h"
#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QTextStream>
#include <QtCore>
#include <QtGui>

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
    void paintEvent(QPaintEvent *e);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
