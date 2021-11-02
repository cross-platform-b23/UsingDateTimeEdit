#include "dialog.h"
#include "ui_dialog.h"
#include <QtDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->comboBoxGender->addItem("Male", QChar('M'));
    ui->comboBoxGender->addItem("Female", QChar('F'));
    ui->spinBoxAge->setRange(1, 150);
//    ui->dateEditBirthday->setDate(QDate::currentDate());
    ui->dateEditBirthday->setDate(QDate(1990, 1, 1));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_dateEditBirthday_userDateChanged(const QDate &date)
{
    qDebug() << "on_dateEditBirthday_userDateChanged: " << date;
}

