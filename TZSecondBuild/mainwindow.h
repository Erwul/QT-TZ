#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <human.h>
#include <QRegExpValidator>
#include <QLineEdit>
#include <QString>
#include <QtWidgets>
#include <QTableWidgetItem>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Human *human;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void textLayout();
    QTableWidgetItem *car = new QTableWidgetItem;
    QTableWidgetItem *city = new QTableWidgetItem;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEditName_textChanged(const QString &arg1);

    void on_lineEditPhone_textChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
signals:
    void signal();

};
#endif // MAINWINDOW_H
