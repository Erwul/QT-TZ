#include "widget.h"
#include "ui_widget.h"

//Widget::Widget(QWidget *parent)
//    : QWidget(parent)
//    , ui(new Ui::Widget)
//{
//    ui->setupUi(this);
//}

Widget::Widget(QSharedPointer<ContactModel> model, QSharedPointer<Controller> ctrl, QWidget *parent) : QWidget(parent),
    ui(new Ui::Widget),  model_(model), ctrl_(ctrl)  {
    ui->setupUi(this);
    QRegExp regExp("[0-9]{,3}");
     QRegExpValidator* valid = new QRegExpValidator(regExp, this);
     ui->lineEdit_age->setValidator(valid);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::layoutUpadate()
{
    ui->label_age->setText(QString::number(model_->showAge()));
    ui->label_city->setText(model_->showCountry());
    ui->label_name->setText(model_->showFullName());
    ui->label_pass->setText(model_->showID());
    ui->label_phone->setText(model_->showPhone());
    ui->label_weight->setText(QString::number(model_->showWeight()));
}

void Widget::slotUpdate()
{

}



void Widget::on_pushButton_ok_clicked()
{
    ctrl_->changeNameN(ui->lineEdit_name->text());
    ctrl_->changePhoneN(ui->lineEdit_phone->text());
    layoutUpadate();
    //update();

}

void Widget::on_pushButton_cancel_clicked()
{
    update();
}

void Widget::update() // апдейт должен срабатывать от изменения модели ?
{
    ui->lineEdit_name->setText(model_->showFullName());
    ui->lineEdit_phone->setText(model_->showPhone());

}

void Widget::on_lineEdit_age_textChanged(const QString &arg1)
{
    ctrl_->changeAgeN(ui->lineEdit_age->text().toInt());
    layoutUpadate();
}

void Widget::on_lineEdit_id_textChanged(const QString &arg1)
{
    ctrl_->changeIDN(ui->lineEdit_id->text());
    layoutUpadate();
}


void Widget::on_pushButton_table_clicked()
{
  QTableWidgetItem *item1 = ui->tableWidget->item(0, 0);
  if (NULL != item1) {
       //human->setCitizenship(item1->text());
        ctrl_->changeWeightN(item1->text().toInt());
  }
  QTableWidgetItem *item2 = ui->tableWidget->item(1,0);
      if (NULL != item2) {
        //human->setCar(item2->text());
        ctrl_->changeCountryN(item2->text());
      }
      layoutUpadate();
}

void Widget::on_pushButton_clicked() // заполнить по умолчанию
{
    ctrl_->changeAgeN(22);
    ctrl_->changeCountryN("Россия");
    ctrl_->changeIDN("Приватно");
    ctrl_->changePhoneN("+79030433349");
    ctrl_->changeWeightN(70);
    ctrl_->changeNameN("Андрей");

    weight->setText(QString::number(model_->showWeight()));
    ui->tableWidget->setItem(0, 0, weight);

    city->setText(model_->showCountry());
        ui->tableWidget->setItem(1,0, city);

    layoutUpadate();
    update();
    ui->lineEdit_age->setText(QString::number(model_->showAge()));
    ui->lineEdit_id->setText(model_->showID());
}

void Widget::on_pushButton_2_clicked() // очистить
{
    ctrl_->changeAgeN(NULL);
    ctrl_->changeCountryN("");
    ctrl_->changeIDN("");
    ctrl_->changePhoneN("");
    ctrl_->changeWeightN(NULL);
    ctrl_->changeNameN("");
    layoutUpadate();
    update();
    weight->setText(QString::number(model_->showWeight()));
    ui->tableWidget->setItem(0, 0, weight);

    city->setText(model_->showCountry());
        ui->tableWidget->setItem(1,0, city);

    ui->lineEdit_age->setText(QString::number(model_->showAge()));
    ui->lineEdit_id->setText(model_->showID());
    ui->lineEdit_age->clear();
    ui->label_age->clear();
    ui->label_weight->clear();
//    empty->setText(" ");
//   ui->tableWidget->setItem(1,0, empty);
}
