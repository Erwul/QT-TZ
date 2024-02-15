#ifndef DIALOG_H
#define DIALOG_H
#include <QApplication>
#include <QDialog>
#include <QPixmap>
#include "human.h"
#include <QRegExpValidator>
#include <dialogwindowone.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog *ui;
};




#endif // DIALOG_H
