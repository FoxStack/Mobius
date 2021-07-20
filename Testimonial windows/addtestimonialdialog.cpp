#include "addtestimonialdialog.h"
#include "ui_addtestimonialdialog.h"
#include <QDebug>

AddTestimonialDialog::AddTestimonialDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTestimonialDialog)
{
    ui->setupUi(this);
    ui->nameLabel->setText("Neda"); //change so it sets users name variable
}

AddTestimonialDialog::~AddTestimonialDialog()
{
    delete ui;
}

void AddTestimonialDialog::on_buttonBox_accepted()
{
    QString s = ui->testimonialText->toPlainText();

    //make Ok button save testimonial to db

    //insert s into the db
}

