#include "dialogwindowone.h"
#include "ui_dialogwindowone.h"

DialogWindowOne::DialogWindowOne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogWindowOne)
{
    ui->setupUi(this);

}

DialogWindowOne::~DialogWindowOne()
{
    delete ui;
}

void DialogWindowOne::on_pushButton_2_clicked()
{

    deleteLater();
    close();
}

void DialogWindowOne::on_pushButton_clicked()
{
    deleteLater();
    close();
}
