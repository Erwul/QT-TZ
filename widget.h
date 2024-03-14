#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QString>
#include <QRegExpValidator>
#include <QTableWidgetItem>
#include "controller.h"
#include "contactmodel.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:

    Widget(QSharedPointer<ContactModel> model, QSharedPointer<Controller> ctrl, QWidget *parent = nullptr );;
    ~Widget();
    void layoutUpadate();
public slots:
    void slotUpdate();
private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_cancel_clicked();

    void update();

    void on_lineEdit_age_textChanged(const QString &arg1);

    void on_lineEdit_id_textChanged(const QString &arg1);

    void on_pushButton_table_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    QSharedPointer<ContactModel> model_;
    QSharedPointer<Controller> ctrl_;
    QTableWidgetItem *weight = new QTableWidgetItem;
    QTableWidgetItem *city = new QTableWidgetItem;
    QTableWidgetItem *empty = new QTableWidgetItem;
};
#endif // WIDGET_H
