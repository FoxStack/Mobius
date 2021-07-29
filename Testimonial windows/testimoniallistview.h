#ifndef TESTIMONIALLISTVIEW_H
#define TESTIMONIALLISTVIEW_H

#include <QWidget>

namespace Ui {
class TestimonialListView;
}

class TestimonialListView : public QWidget
{
    Q_OBJECT

public:
    explicit TestimonialListView(QWidget *parent = nullptr);
    ~TestimonialListView();

private slots:
    void on_addTestimonialButton_clicked();

    void on_openTestimButton_clicked();

private:
    Ui::TestimonialListView *ui;
    void populateList();
};

#endif // TESTIMONIALLISTVIEW_H
