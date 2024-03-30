#include "credit.h"
#include "./ui_credit.h"

Credit::Credit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Credit)
{
    ui->setupUi(this);

}

Credit::~Credit()
{
    delete ui;
}

void Credit::onRadioButtonToggled(bool checked) {
    QString sStr = ui->allAmountCredit_line->text();
    QString pStr = ui->interestRate_line->text();
    QString nStr = ui->period_line->text();
    double S = sStr.toDouble();
    double P = pStr.toDouble();
    int N = nStr.toInt();
    if (ui->ann->isChecked()){
      ann_logic(S, P, N);
    } else if (ui->dif->isChecked()){
       dif_logic(S, P, N);
    }
}

void Credit::ann_logic(double S, double P, int N) {
    double res = 0, month = 0, overpayment_on_the_loan = 0;
    res = all_ras_ann(S, P, N);
    QString resString = QString::number(res, 'f', 2);
    ui->totalPayment_res->setText(resString);
    month = ras_ann(S, P, N);
    QString monthString = QString::number(month, 'f', 2);
    ui->monthlyPayment_res->setText(monthString);
    ui->monthlyFirst_res->setText(0);
    ui->monthlyLast_res->setText(0);
    overpayment_on_the_loan = res - S;
    QString overpaymentString = QString::number(overpayment_on_the_loan, 'f', 2);
    ui->overpayment_res->setText(overpaymentString);
}

void Credit::dif_logic(double S, double P, int N) {
    double res = 0, month = 0, overpayment_on_the_loan = 0;

    res = all_ras_dif(S, P, N);
    QString resString = QString::number(res, 'f', 2);
    ui->totalPayment_res->setText(resString);
    // i: 0 - first
    // i: 11 - last
    QString monthStringF = QString::number(ras_dif(S, P, N, 0), 'f', 2);
    ui->monthlyFirst_res->setText(monthStringF);

    QString monthStringL = QString::number(ras_dif(S, P, N, N - 1), 'f', 2);
    ui->monthlyLast_res->setText(monthStringL);

    ui->monthlyPayment_res->setText(0);

    for (int i = 0; i < N; i++) {
        overpayment_on_the_loan += ras_dif(S, P, N, i);
    }
    overpayment_on_the_loan = overpayment_on_the_loan - S;
    QString overpaymentString = QString::number(overpayment_on_the_loan, 'f', 2);
    ui->overpayment_res->setText(overpaymentString);
}

void Credit::on_pushButton_clicked()
{
    connect(ui->ann, SIGNAL(toggled(bool)), this, SLOT(onRadioButtonToggled(bool)));
    connect(ui->dif, SIGNAL(toggled(bool)), this, SLOT(onRadioButtonToggled(bool)));
}

