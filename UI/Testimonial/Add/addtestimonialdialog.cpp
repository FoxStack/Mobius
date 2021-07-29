#include "addtestimonialdialog.h"
#include "ui_addtestimonialdialog.h"
#include "../../../DB/DB.h"
#include <iostream>
#include <string>

using namespace std;

AddTestimonialDialog::AddTestimonialDialog(QWidget *parent) :
QDialog(parent),
ui(new Ui::AddTestimonialDialog)
{
    ui->setupUi(this);
    ui->nameLabel->setText("Name of user"); //change so it sets users name variable
}

AddTestimonialDialog::~AddTestimonialDialog()
{
    delete ui;
}

void AddTestimonialDialog::on_buttonBox_accepted() //OK button is clicked
{
    //give you the testimonial entered in the box as a string
    QString s = ui->testimonialText->toPlainText();

    if(!s.isEmpty())
    {
        //open a db file for testimonials
        DB db("/Users/Neda/2DGraphics/DB.txt");

        //read from the file
        nlohmann::json j = db.read();

        //append the testimonial string to the JSON
        // ...

        //write the updated JSON back to the file
        db.write(j);
    }
}
