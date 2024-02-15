#include "ui_dialog.h"
#include "dialog.h"
#include "QDialog"

Human human;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{

    ui->setupUi(this);
    //adjustSize();
    //    QRegExp regExp("[A-Fa-f0-9]{,10}");
    //    QRegExpValidator* valid = new QRegExpValidator(regExp, this);
    //    ui->lineEdit->setValidator(valid);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
//   DialogWindowOne window;
//   window.show();
}

void Dialog::on_pushButton_2_clicked()
{

}

void Dialog::on_pushButton_3_clicked()
{

}

void Dialog::on_pushButton_4_clicked()
{
    /*QPixmap pixmap("face.png");
    ui->label_picture->setPixmap(pixmap)*/;

    ui->label_name->setText(human.getName());
    ui->label_age->setText(QString::number(human.getAge()));
    ui->label_car->setText(human.getCar());
    ui->label_citizenship->setText(human.getCitizenship());
    ui->label_passportId->setText(human.getPassportId());
    ui->label_phone->setText(human.getphoneNumber());
}
