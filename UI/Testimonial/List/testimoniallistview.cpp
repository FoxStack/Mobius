#include "testimoniallistview.h"
#include "../../../DB/DB.h"
#include "../Add/addtestimonialdialog.h"
#include "ui_testimoniallistview.h"
#include <QDebug>
#include <iostream>

TestimonialListView::TestimonialListView(QWidget *parent)
    : QWidget(parent), ui(new Ui::TestimonialListView) {
  ui->setupUi(this);

  // open a db file for testimonials
  DB db("Testimonial.txt");
  // read from the file
  nlohmann::json j = db.read();

  //I am a god -Raf
  for(auto& e : j){
    QString s = QString::fromStdString(e.at("description"));
    ui->testimList->addItem(s);
  }

  /*
   * Next time don't leave this shit unfinished, Parham and I were walking through the project and
   * I noticed that even though this was supposed to be done this morning, I open add and list classes and see that it literally
   * only reads the input and doesn't do any of the DB stuff even though I added instructions in Discord and documentation and explained the DB class.
   * Next time write the god damn code or don't do it at all.
   */

}

TestimonialListView::~TestimonialListView() { delete ui; }

void TestimonialListView::on_addTestimonialButton_clicked() {
  AddTestimonialDialog addTestimonial;
  addTestimonial.exec();
}

void TestimonialListView::on_openTestimButton_clicked() {
  // gives you the name of the item (testimonial) in the list view
  ui->testimList->currentItem()->text();

  // could use clients name to retrieve testimonial from db
  //  ...

  // present correct testimonial from db using name selected
  //  ...
}