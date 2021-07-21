#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>
#include <QtGui>
#include <QtCore>
#include "src/Shape.h"
#include "src/Rectangle.h"
#include "src/Ellipse.h"
#include "src/Line.h"

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
