#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "testimoniallistview.h"
#include <QMainWindow>

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
    void on_showTestimonialButton_clicked();

    void on_contactButton_clicked();

private:
    Ui::MainWindow *ui;
    TestimonialListView *testimonialView;
};
#endif // MAINWINDOW_H
