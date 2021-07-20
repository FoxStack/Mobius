#include "testimoniallistview.h"
#include "ui_testimoniallistview.h"
#include "addtestimonialdialog.h"
#include <QDebug>

TestimonialListView::TestimonialListView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestimonialListView)
{
    ui->setupUi(this);

    //populate the list view
    ui->testimList->addItem("first");
    ui->testimList->addItem("second");



}

TestimonialListView::~TestimonialListView()
{
    delete ui;
}

void TestimonialListView::on_addTestimonialButton_clicked()
{
    AddTestimonialDialog addTestimonial;
    addTestimonial.exec();
}


void TestimonialListView::on_openTestimButton_clicked()
{
    qDebug() << ui->testimList->currentItem()->text();
}

