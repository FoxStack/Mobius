#ifndef ADDTESTIMONIALDIALOG_H
#define ADDTESTIMONIALDIALOG_H

#include <QDialog>

namespace Ui {
class AddTestimonialDialog;
}

class AddTestimonialDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddTestimonialDialog(QWidget *parent = nullptr);
    ~AddTestimonialDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddTestimonialDialog *ui;
};

#endif // ADDTESTIMONIALDIALOG_H
