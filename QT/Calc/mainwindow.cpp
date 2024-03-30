#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    stop_oper();
    ui->RightParen->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_but1_released() {
    ui->label->setText(ui->label->text() + "1");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}

void MainWindow::on_but2_released() {
    ui->label->setText(ui->label->text() + "2");
    start_oper();
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    ui->EX_button->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but3_released() {
    ui->label->setText(ui->label->text() + "3");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but4_released() {
    ui->label->setText(ui->label->text() + "4");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but5_released() {
    ui->label->setText(ui->label->text() + "5");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but6_released() {
    ui->label->setText(ui->label->text() + "6");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but7_released() {
    ui->label->setText(ui->label->text() + "7");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but8_released() {
    ui->label->setText(ui->label->text() + "8");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but9_released() {
    ui->label->setText(ui->label->text() + "9");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_but0_released() {
    ui->label->setText(ui->label->text() + "0");
    start_oper();
    ui->EX_button->setEnabled(false);
    ui->RightParen->setEnabled(true);
    ui->LeftParen->setEnabled(false);
    stop_trigan();
}


void MainWindow::on_butPoint_released() {
    ui->label->setText(ui->label->text() + ".");
    ui->butPoint->setEnabled(false);
    ui->RightParen->setEnabled(false);
    ui->LeftParen->setEnabled(false);
    ui->EX_button->setEnabled(false);
    stop_oper();
    stop_trigan();
}


void MainWindow::on_BackSpace_released() {
    QString text = ui->label->text();
    text.chop(1);
    ui->label->setText(text);
    start();
}


void MainWindow::on_Div_released()
{
    ui->label->setText(ui->label->text() + "/");
    stop_oper();
    ui->EX_button->setEnabled(true);
    ui->RightParen->setEnabled(false);
    ui->LeftParen->setEnabled(true);
    ui->butPoint->setEnabled(true);
    start_num();
    start_trigan();
}


void MainWindow::on_Mult_released()
{
    ui->label->setText(ui->label->text() + "*");
    stop_oper();
    ui->EX_button->setEnabled(true);
    ui->RightParen->setEnabled(false);
    ui->LeftParen->setEnabled(true);
    ui->butPoint->setEnabled(true);
    start_num();
    start_trigan();
}


void MainWindow::on_Plus_released()
{
    ui->label->setText(ui->label->text() + "+");
    stop_oper();
    ui->EX_button->setEnabled(true);
    ui->RightParen->setEnabled(false);
    ui->LeftParen->setEnabled(true);
    ui->butPoint->setEnabled(true);
    start_num();
    start_trigan();
}


void MainWindow::on_Minus_released()
{
    ui->label->setText(ui->label->text() + "-");
    stop_oper();
    ui->EX_button->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    ui->RightParen->setEnabled(false);
    ui->butPoint->setEnabled(true);
    start_num();
    start_trigan();
}


void MainWindow::on_Clear_released()
{
    ui->label->setText("");
    ui->EX_button->setEnabled(true);
    start();
    stop_oper();
    ui->RightParen->setEnabled(false);
}

void MainWindow::on_cos_released()
{
    ui->label->setText(ui->label->text() + "cos(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_sin_released()
{
    ui->label->setText(ui->label->text() + "sin(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_tan_released()
{
    ui->label->setText(ui->label->text() + "tan(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_acos_released()
{
    ui->label->setText(ui->label->text() + "acos(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_asin_released()
{
    ui->label->setText(ui->label->text() + "asin(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_atan_released()
{
    ui->label->setText(ui->label->text() + "atan(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_ln_released()
{
    ui->label->setText(ui->label->text() + "ln(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_log_released()
{
    ui->label->setText(ui->label->text() + "log(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}

void MainWindow::on_LeftParen_released()
{
    ui->label->setText(ui->label->text() + "(");
    ui->EX_button->setEnabled(true);
    ui->Minus->setEnabled(true);
    ui->RightParen->setEnabled(false);
    ui->butPoint->setEnabled(true);
}


void MainWindow::on_RightParen_released()
{
    ui->label->setText(ui->label->text() + ")");
    start_oper();
    ui->but1->setEnabled(false);
    ui->but2->setEnabled(false);
    ui->but3->setEnabled(false);
    ui->but4->setEnabled(false);
    ui->but5->setEnabled(false);
    ui->but6->setEnabled(false);
    ui->but7->setEnabled(false);
    ui->but8->setEnabled(false);
    ui->but9->setEnabled(false);
    ui->but0->setEnabled(false);
    ui->butPoint->setEnabled(false);

    stop_trigan();
}


void MainWindow::on_sqrt_released()
{
    ui->label->setText(ui->label->text() + "sqrt(");
    ui->EX_button->setEnabled(true);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    stop_oper();
}


void MainWindow::on_Percent_released()
{
    ui->label->setText(ui->label->text() + "mod");
    ui->EX_button->setEnabled(true);
    ui->RightParen->setEnabled(false);
    ui->butPoint->setEnabled(true);
    stop_oper();
    start_num();
}

void MainWindow::on_EX_button_released()
{
    ui->label->setText(ui->label->text() + "x");
    ui->EX_button->setEnabled(false);
    ui->but1->setEnabled(false);
    ui->but2->setEnabled(false);
    ui->but3->setEnabled(false);
    ui->but4->setEnabled(false);
    ui->but5->setEnabled(false);
    ui->but6->setEnabled(false);
    ui->but7->setEnabled(false);
    ui->but8->setEnabled(false);
    ui->but9->setEnabled(false);
    ui->but0->setEnabled(false);
    ui->butPoint->setEnabled(false);
    ui->LeftParen->setEnabled(false);

    stop_trigan();

    start_oper();

    ui->RightParen->setEnabled(true);
}

void MainWindow::on_Scale_released()
{
    ui->label->setText(ui->label->text() + "^");
    stop_oper();

    ui->EX_button->setEnabled(true);
    ui->RightParen->setEnabled(false);
    ui->butPoint->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    start_num();
    start_trigan();
}

void MainWindow::stop() {
    ui->BackSpace->setEnabled(false);
    ui->EX_button->setEnabled(false);
    ui->Equal->setEnabled(false);
    ui->LeftParen->setEnabled(false);
    ui->RightParen->setEnabled(false);

    ui->Scale->setEnabled(false);
    ui->Div->setEnabled(false);
    ui->Mult->setEnabled(false);
    ui->Plus->setEnabled(false);
    ui->Percent->setEnabled(false);
    ui->Minus->setEnabled(false);

    ui->sin->setEnabled(false);
    ui->cos->setEnabled(false);
    ui->tan->setEnabled(false);
    ui->asin->setEnabled(false);
    ui->acos->setEnabled(false);
    ui->atan->setEnabled(false);
    ui->sqrt->setEnabled(false);
    ui->log->setEnabled(false);
    ui->ln->setEnabled(false);

    ui->but1->setEnabled(false);
    ui->but2->setEnabled(false);
    ui->but3->setEnabled(false);
    ui->but4->setEnabled(false);
    ui->but5->setEnabled(false);
    ui->but6->setEnabled(false);
    ui->but7->setEnabled(false);
    ui->but8->setEnabled(false);
    ui->but9->setEnabled(false);
    ui->but0->setEnabled(false);
    ui->butPoint->setEnabled(false);
}

void MainWindow::start() {
    ui->BackSpace->setEnabled(true);
    ui->EX_button->setEnabled(true);
    ui->Equal->setEnabled(true);
    ui->LeftParen->setEnabled(true);
    ui->RightParen->setEnabled(true);

    ui->Scale->setEnabled(true);
    ui->Div->setEnabled(true);
    ui->Mult->setEnabled(true);
    ui->Plus->setEnabled(true);
    ui->Percent->setEnabled(true);
    ui->Minus->setEnabled(true);

    ui->sin->setEnabled(true);
    ui->cos->setEnabled(true);
    ui->tan->setEnabled(true);
    ui->asin->setEnabled(true);
    ui->acos->setEnabled(true);
    ui->atan->setEnabled(true);
    ui->sqrt->setEnabled(true);
    ui->log->setEnabled(true);
    ui->ln->setEnabled(true);

    ui->but1->setEnabled(true);
    ui->but2->setEnabled(true);
    ui->but3->setEnabled(true);
    ui->but4->setEnabled(true);
    ui->but5->setEnabled(true);
    ui->but6->setEnabled(true);
    ui->but7->setEnabled(true);
    ui->but8->setEnabled(true);
    ui->but9->setEnabled(true);
    ui->but0->setEnabled(true);
    ui->butPoint->setEnabled(true);
}

void MainWindow::start_num() {
    ui->but1->setEnabled(true);
    ui->but2->setEnabled(true);
    ui->but3->setEnabled(true);
    ui->but4->setEnabled(true);
    ui->but5->setEnabled(true);
    ui->but6->setEnabled(true);
    ui->but7->setEnabled(true);
    ui->but8->setEnabled(true);
    ui->but9->setEnabled(true);
    ui->but0->setEnabled(true);
    ui->butPoint->setEnabled(true);

    ui->sin->setEnabled(true);
    ui->cos->setEnabled(true);
    ui->tan->setEnabled(true);
    ui->asin->setEnabled(true);
    ui->acos->setEnabled(true);
    ui->atan->setEnabled(true);
    ui->sqrt->setEnabled(true);
    ui->log->setEnabled(true);
    ui->ln->setEnabled(true);
}

void MainWindow::stop_oper() {
    ui->Div->setEnabled(false);
    ui->Mult->setEnabled(false);
    ui->Plus->setEnabled(false);
    ui->Minus->setEnabled(false);
    ui->Percent->setEnabled(false);
    ui->Scale->setEnabled(false);
}

void MainWindow::start_oper() {
    ui->Div->setEnabled(true);
    ui->Mult->setEnabled(true);
    ui->Plus->setEnabled(true);
    ui->Minus->setEnabled(true);
    ui->Percent->setEnabled(true);
    ui->Scale->setEnabled(true);
}

void MainWindow::stop_trigan() {
    ui->sin->setEnabled(false);
    ui->cos->setEnabled(false);
    ui->tan->setEnabled(false);
    ui->asin->setEnabled(false);
    ui->acos->setEnabled(false);
    ui->atan->setEnabled(false);
    ui->sqrt->setEnabled(false);
    ui->log->setEnabled(false);
    ui->ln->setEnabled(false);
}

void MainWindow::start_trigan() {
    ui->sin->setEnabled(true);
    ui->cos->setEnabled(true);
    ui->tan->setEnabled(true);
    ui->asin->setEnabled(true);
    ui->acos->setEnabled(true);
    ui->atan->setEnabled(true);
    ui->sqrt->setEnabled(true);
    ui->log->setEnabled(true);
    ui->ln->setEnabled(true);
}

void MainWindow::on_Equal_clicked()
{
        stop();
        start_oper();
      QString qString = ui->label->text();
      QString x_label = ui->lineEX->text();
      bool is_number = false;
      bool error = false;
      x_label.toDouble(&is_number);
      if (qString.contains('x')) {
         for (int i = 0; i < qString.length(); ++i) {
           if (qString.at(i) == 'x') {
             qString.replace("x", ui->lineEX->text());
           } else if (!is_number){
             ui->label->setText("ERROR");
             error = true;
             stop();
           }
         }
      }
      if (!error) {
        std::string string = qString.toStdString();
        const char *cString = string.c_str();
        error = number_of_brackets(cString);
        if (!error) {
        long double num = run(cString);
        QString i = QString::number(num, 'f', 6);
        ui->label->setText(i);
        } else {
            ui->label->setText("ERROR");
        }
      }
      if(ui->label->text() == "ERROR" || ui->label->text() == "inf" || ui->label->text() == "nan"){
        stop();
        }
}

void MainWindow::GraphFunc() {
  double xStart = -5;
  double xEnd = 5;
  double yStart = -2;
  double yEnd = 2;
  if (ui->lineX2->text().isEmpty() || ui->lineX1->text().isEmpty() ||
      ui->lineY2->text().isEmpty() || ui->lineY1->text().isEmpty()) {
    ui->widget->xAxis->setRange(xStart, xEnd);
    ui->widget->yAxis->setRange(yStart, yEnd);
  } else {
    ui->widget->xAxis->setRange(ui->lineX1->text().toDouble(),
                                ui->lineX2->text().toDouble());
    ui->widget->yAxis->setRange(ui->lineY1->text().toDouble(),
                                ui->lineY2->text().toDouble());
  }
  QVector<double> x(10001), y(10001);
  for (int i = 0; i < 10001; ++i) {
    QString qstr = ui->label->text();
    x[i] = (i - 5000.0) / fabs(xStart);
    QString x_value = QString::number(x[i]);
    qstr.replace("x", "(" + x_value + ")");
    std::string str = qstr.toStdString();
    const char *cstr = str.c_str();
    y[i] = run(cstr);
  }
  ui->widget->addGraph();
  ui->widget->graph(0)->setData(x, y);
  ui->widget->replot();
}

void MainWindow::on_credit_clicked()
{
    QPoint coords = this->getWidgetCoordinates();
    credit.setGeometry(coords.x(), coords.y(), 603, 467);
    credit.show();
}


void MainWindow::on_graph_clicked()
{
    GraphFunc();
}

