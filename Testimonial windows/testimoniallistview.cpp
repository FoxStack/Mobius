#include "testimoniallistview.h"
#include "ui_testimoniallistview.h"
#include "addtestimonialdialog.h"
#include <QDebug>
#include "DB.h"
#include <vector>
#include <QMessageBox>
using nlohmann::json;
using namespace std;

string dataBasePath = "/Users/Neda/2DGraphics/db.txt"; //update database path (seperate text file only for testimonials

struct Testimonial
{
    std::string clientName;
    std::string testimonialString;
};

void TestimonialListView::populateList()
{
    ui->testimList->clear();

    //populate the testimonial list view
    //populate with list items that have name of client who gave testimonial

    std::vector<Testimonial> v;

    //get client names from db and store in vector

    DB db(dataBasePath);
    json j = db.read();

    Testimonial t;

    for(int i = 0; i < j.size(); ++i)
    {
        t.clientName = j[i][0];
        t.testimonialString = j[i][1];
        v.push_back(t);
    }

    //add list items to list

    for (int i = 0; i < j.size(); ++i)
    {
        ui->testimList->addItem(QString::fromStdString(v[i].clientName));
    }
}

TestimonialListView::TestimonialListView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestimonialListView)
{
    ui->setupUi(this);

    populateList();
}

TestimonialListView::~TestimonialListView()
{
    delete ui;
}

void TestimonialListView::on_addTestimonialButton_clicked()
{
    AddTestimonialDialog addTestimonial;
    addTestimonial.exec();

    populateList();
}


QString qFromString(string str)
{
    return QString::fromStdString(str);
}


void TestimonialListView::on_openTestimButton_clicked()
{
    if(ui->testimList->currentItem() != nullptr)
    {
    //gives you the name of the item (testimonial) in the list view
    QString s = ui->testimList->currentItem()->text();

    //could use clients name to retrieve testimonial from db
    DB db(dataBasePath);

    json j = db.read();

    QString client, review;

    for(int i = 0; i < j.size(); ++i)
    {
        if(j[i][0] == s.toStdString())
        {
            client = qFromString(j[i][0]);
            review = qFromString(j[i][1]);
            break;
        }
    }

    QMessageBox m;
    m.setText("Testimonial by " + client + ":\n\n" + review);
    m.exec();
    }
}

