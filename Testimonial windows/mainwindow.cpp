#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addtestimonialdialog.h"
#include "testimoniallistview.h"
#include <QDebug>
#include <QWidget>
#include "contactus.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testimonialView = nullptr;
}

MainWindow::~MainWindow()
{
    delete testimonialView;
    delete ui;
    qDebug() << "mainwind destruct";
}


void MainWindow::on_showTestimonialButton_clicked()
{
    if(testimonialView != nullptr)
        delete testimonialView;

    testimonialView = new TestimonialListView;
    testimonialView->show();
}


void MainWindow::on_contactButton_clicked()
{
    ContactUs contactUs;
    contactUs.exec();

}

