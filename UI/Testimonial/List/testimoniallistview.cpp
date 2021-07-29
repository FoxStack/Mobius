#include "testimoniallistview.h"
#include "ui_testimoniallistview.h"
#include "../Add/addtestimonialdialog.h"
#include <QDebug>

TestimonialListView::TestimonialListView(QWidget *parent) :
QWidget(parent),
ui(new Ui::TestimonialListView)
{
    ui->setupUi(this);

    //populate the testimonial list view
    //populate with list items that have name of client who gave testimonial

    //get client names from db and store in vector
    // ...

    //example of how to add item with item title
    ui->testimList->addItem("client 1"); //changed to client names from db
    ui->testimList->addItem("client 2");
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
    //gives you the name of the item (testimonial) in the list view
    ui->testimList->currentItem()->text();

    //could use clients name to retrieve testimonial from db
    // ...

    //present correct testimonial from db using name selected
    // ...
}