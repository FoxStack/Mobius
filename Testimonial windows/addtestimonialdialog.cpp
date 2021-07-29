#include "addtestimonialdialog.h"
#include "ui_addtestimonialdialog.h"
#include "DB.h"
#include <iostream>
#include <string>
#include <QDebug>

using namespace std;

string databasePath = "/Users/Neda/2DGraphics/db.txt"; //update

AddTestimonialDialog::AddTestimonialDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTestimonialDialog)
{
    ui->setupUi(this);

}

AddTestimonialDialog::~AddTestimonialDialog()
{
    delete ui;
}

void AddTestimonialDialog::on_buttonBox_accepted() //OK button is clicked
{
    //give you the testimonial entered in the box as a string
    QString s = ui->testimonialText->toPlainText();
    QString name = ui->customerNameText->toPlainText();

    if(!s.isEmpty() && !name.isEmpty())
    {
        //open a db file for testimonials
        DB db(databasePath);

        //read from the file
        nlohmann::json j = db.read();

        //append the testimonial string to the JSON
        j.push_back({name.toStdString(), s.toStdString()});

        //write the updated JSON back to the file
        db.write(j);
    }
}

