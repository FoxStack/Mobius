#include "addtestimonialdialog.h"
#include "../../../DB/DB.h"
#include "../../../Lib/UUID/sole.hpp"
#include "ui_addtestimonialdialog.h"
#include <iostream>
#include <string>

class uuid;
using namespace std;

AddTestimonialDialog::AddTestimonialDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::AddTestimonialDialog) {
  ui->setupUi(this);
  ui->nameLabel->setText(
      "Name of user"); // change so it sets users name variable
}

AddTestimonialDialog::~AddTestimonialDialog() { delete ui; }

void AddTestimonialDialog::on_buttonBox_accepted() // OK button is clicked
{
  // give you the testimonial entered in the box as a string
  QString s = ui->testimonialText->toPlainText();

  if (!s.isEmpty()) {
    // open a db file for testimonials
    DB db("Testimonial.txt");
    std::string utf8 = s.toUtf8().constData();
    // read from the file
    nlohmann::json j = db.read();
    //Create UUID
    std::string ID = sole::uuid4().str();
    nlohmann::json _holder = {
        {ID, { {"description", utf8} } }
    };
    j.update(_holder);

    // write the updated JSON back to the file
    db.write(j);
  }
}
