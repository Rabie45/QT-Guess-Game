#include "widget.h"
#include "./ui_widget.h"
#include "QDebug"
#include <QMessageBox>
#include <cstdlib>
#include <ctime>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    std::srand(std::time(nullptr));
    secretNumber=std::rand()%10+1;
    qDebug() << "Secret number is: "<<QString::number(secretNumber);
    ui->startOverButton->setDisabled(true);

}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_startOverButton_clicked()
{
     qDebug() << "startOverButton_clicked";
    if(guessNumber == secretNumber) {
         qDebug() << "You WON! ";
         QMessageBox::information(this, "Messege", "You WON !");
     }
    else {
         qDebug() << "You lost ";
         QMessageBox::information(this, "Messege", "You LOST XD");

    }
}

void Widget::on_GuessButon_clicked()
{
    guessNumber =ui->mySpinBox->value();
    qDebug() << "on_GuessButon_clicked" << QString::number(guessNumber);
    ui->startOverButton->setDisabled(false);
}

