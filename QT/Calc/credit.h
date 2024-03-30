#ifndef CREDIT_H
#define CREDIT_H

#include <QWidget>

struct mode {
    int mode = 0;
};

namespace Ui {
class Credit;
}
extern "C" {
 #include "../../src/s21_smartcalc.h"
}
class Credit : public QWidget
{
    Q_OBJECT

public:
    explicit Credit(QWidget *parent = nullptr);
    ~Credit();
private slots:
    void onRadioButtonToggled(bool checked);
    void ann_logic(double S, double P, int N);
    void dif_logic(double S, double P, int N);
    void on_pushButton_clicked();

private:
    Ui::Credit *ui;
};

#endif // CREDIT_H
