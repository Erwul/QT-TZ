#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    human = new Human(this);
    human->setAge(0);
    QRegExp regExp("[0-9]{,3}");
    QRegExpValidator* valid = new QRegExpValidator(regExp, this);
    //ui->lineEdit->setValidator(valid);
    ui->lineEditAge->setValidator(valid);
    //w.setLayout(layout);
 //connect(this, SIGNAL(textChanged(QString)), this, SLOT(upDateSize(QString)));

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::textLayout()
{
    //Основной блок

    ui->label_name->setText(human->getName());


    ui->label_age->setText(QString::number(human->getAge()));


    ui->label_car->setText(human->getCar());
    ui->label_city->setText(human->getCitizenship());
    ui->label_pass->setText(human->getPassportId());
    ui->label_phone->setText(human->getphoneNumber());

    //Прямой диалог

    ui->lineEditName->setText(human->getName());
    ui->lineEditPhone->setText(human->getphoneNumber());
    //Диалог с подтверждением


        //qDebug()<<typeof(QString::number(ui->lineEditAge->text().toInt()));
        if (QString::number(ui->lineEditAge->text().toInt()) == NULL)
        {
             ui->lineEditAge->clear();
        }
        else {
             ui->lineEditAge->setText(QString::number(human->getAge()));
        }
    ui->lineEditPass->setText(human->getPassportId());

    //Таблица

    car->setText(human->getCitizenship());
    ui->tableWidget->setItem(0,0, car);
    city->setText(human->getCar());
    ui->tableWidget->setItem(1,0, city);

    //Блок костылей

    if(human->getAge() == NULL || human->getAge() == 0)
        ui->label_age->clear();
    if(ui->lineEditAge->text() == NULL || ui->lineEditAge->text() == "0" )
        ui->lineEditAge->clear();

}





void MainWindow::on_pushButton_clicked()
{

    human->setDefault();
    textLayout();
}

// добавить сигнал на обновление при изменении строки

void MainWindow::on_pushButton_2_clicked()
{
    human->setAge(ui->lineEditAge->text().toInt());
    human->setPassportId(ui->lineEditPass->text());
    textLayout();
}
// По подтверждению
void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEditAge->setText(QString::number(human->getAge()));
    ui->lineEditPass->setText(human->getPassportId());
    textLayout();

}
//  сигнал на изменение строчек приямого даилога

void MainWindow::on_lineEditName_textChanged(const QString &arg1)
{
     human->setName(ui->lineEditName->text());
     textLayout();
}

void MainWindow::on_lineEditPhone_textChanged(const QString &arg1)
{
    human->setphoneNumber(ui->lineEditPhone->text());
    textLayout();
}

void MainWindow::on_pushButton_4_clicked()
{
//    ui->tableWidget->item(0,1)->text();
    QString check;
    QTableWidgetItem *item1 = ui->tableWidget->item(0,0);
    if (NULL != item1) {
      human->setCitizenship(item1->text());
    }
    QTableWidgetItem *item2 = ui->tableWidget->item(1,0);
    if (NULL != item2) {
      human->setCar(item2->text());
    }
    textLayout();
}

void MainWindow::on_pushButton_5_clicked()
{
    human->setName(NULL);
    human->setCar(NULL);
    human->setCitizenship(NULL);
    human->setAge(NULL);
    human->setphoneNumber(NULL);
    human->setPassportId(NULL);
//    ui->label_age->clear();

    textLayout();
}
