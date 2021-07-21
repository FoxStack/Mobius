#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    Rectangle rect2(this);
    rect2.SetDimensions(300, 200);
    rect2.SetCoord(100, 100);
    rect2.GetPainter()->setPen(Qt::red);
    rect2.Draw();

    Ellipse myEllipse(this);
    myEllipse.SetDimensions(50, 100);
    myEllipse.SetCenter(300, 300);
    myEllipse.GetPainter()->setPen(QPen(Qt::green, 5));
    myEllipse.Draw();

    Line myLine(this);
    myLine.SetPointOne(50,500);
    myLine.SetPointTwo(500, 550);
    myLine.GetPainter()->setPen(QPen(Qt::magenta, 3, Qt::DashLine));
    myLine.Draw();
}
