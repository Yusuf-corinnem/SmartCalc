#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string.h>
#include <credit.h>
#include <qvector.h>

extern "C" {
 #include "../../src/s21_smartcalc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPoint getWidgetCoordinates() {
        return this->mapToGlobal(this->rect().topRight());
    }

private slots:

    void GraphFunc();

    void stop();

    void start();

    void start_num();

    void stop_oper();

    void start_oper();

    void stop_trigan();

    void start_trigan();

    void on_but1_released();

    void on_but2_released();

    void on_but3_released();

    void on_but4_released();

    void on_but5_released();

    void on_but6_released();

    void on_but7_released();

    void on_but8_released();

    void on_but9_released();

    void on_but0_released();

    void on_butPoint_released();

    void on_BackSpace_released();

    void on_Div_released();

    void on_Mult_released();

    void on_Plus_released();

    void on_Minus_released();

    void on_Clear_released();

    void on_cos_released();

    void on_sin_released();

    void on_tan_released();

    void on_acos_released();

    void on_asin_released();

    void on_atan_released();

    void on_ln_released();

    void on_log_released();

    void on_LeftParen_released();

    void on_RightParen_released();

    void on_sqrt_released();

    void on_Percent_released();

    void on_EX_button_released();

    void on_Scale_released();

    void on_Equal_clicked();

    void on_credit_clicked();

    void on_graph_clicked();

private:
    Ui::MainWindow *ui;
    Credit credit;
};
#endif // MAINWINDOW_H
