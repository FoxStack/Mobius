#include "contactus.h"
#include "ui_contactus.h"

ContactUs::ContactUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactUs)
{
    ui->setupUi(this);

    this->setWindowTitle("Contact Us");

    // path of logo photo:
    // /Users/neda/Desktop/istockphoto-1178274995-640x640.jpg
//file:///C:/Users/Hiep/Pictures/kappa.png
    //QPixmap pix("/Users/neda/Desktop/istockphoto-1178274995-640x640.jpg");
    //QPixmap pix("C:/Users/Hiep/Pictures/kappa.png");

    //ui->deadBattLogo->setPixmap(pix.scaled(297,170,Qt::KeepAspectRatio));
}

ContactUs::~ContactUs()
{
    delete ui;
}
