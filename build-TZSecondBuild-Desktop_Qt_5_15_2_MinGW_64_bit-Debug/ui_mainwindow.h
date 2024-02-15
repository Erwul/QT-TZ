/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_name;
    QLabel *label_phone;
    QLabel *label_city;
    QLabel *label_car;
    QLabel *label_pass;
    QLabel *label_age;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPhone;
    QLineEdit *lineEditAge;
    QLineEdit *lineEditPass;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 171, 171));
        label->setPixmap(QPixmap(QString::fromUtf8(":/face.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 200, 81, 31));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 240, 221, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 270, 221, 41));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 310, 221, 31));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 350, 131, 31));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 390, 141, 31));
        label_7->setFont(font);
        label_name = new QLabel(centralwidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(80, 200, 221, 31));
        label_name->setFont(font);
        label_phone = new QLabel(centralwidget);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));
        label_phone->setGeometry(QRect(150, 240, 261, 31));
        label_phone->setFont(font);
        label_city = new QLabel(centralwidget);
        label_city->setObjectName(QString::fromUtf8("label_city"));
        label_city->setGeometry(QRect(210, 280, 301, 31));
        label_city->setFont(font);
        label_car = new QLabel(centralwidget);
        label_car->setObjectName(QString::fromUtf8("label_car"));
        label_car->setGeometry(QRect(200, 310, 291, 31));
        label_car->setFont(font);
        label_pass = new QLabel(centralwidget);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setGeometry(QRect(140, 350, 431, 31));
        label_pass->setFont(font);
        label_age = new QLabel(centralwidget);
        label_age->setObjectName(QString::fromUtf8("label_age"));
        label_age->setGeometry(QRect(130, 390, 91, 31));
        label_age->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 510, 161, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 10, 111, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(590, 10, 151, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(610, 170, 151, 16));
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(330, 50, 113, 21));
        lineEditPhone = new QLineEdit(centralwidget);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));
        lineEditPhone->setGeometry(QRect(330, 100, 113, 21));
        lineEditAge = new QLineEdit(centralwidget);
        lineEditAge->setObjectName(QString::fromUtf8("lineEditAge"));
        lineEditAge->setGeometry(QRect(590, 40, 113, 21));
        lineEditPass = new QLineEdit(centralwidget);
        lineEditPass->setObjectName(QString::fromUtf8("lineEditPass"));
        lineEditPass->setGeometry(QRect(590, 90, 113, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(250, 40, 81, 31));
        label_11->setFont(font);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(180, 90, 151, 31));
        label_12->setFont(font);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(450, 30, 141, 31));
        label_13->setFont(font);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(450, 80, 131, 41));
        label_14->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 130, 80, 21));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 130, 80, 21));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(600, 190, 181, 81));
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(700, 280, 80, 21));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(630, 510, 151, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\266\320\264\320\260\320\275\321\201\321\202\320\262\320\276:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202:", nullptr));
        label_name->setText(QString());
        label_phone->setText(QString());
        label_city->setText(QString());
        label_car->setText(QString());
        label_pass->setText(QString());
        label_age->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\320\271 \320\264\320\270\320\260\320\273\320\276\320\263 ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\320\260\320\273\320\276\320\263 \321\201 \320\277\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265\320\274", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\207\320\275\320\276\320\265 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\266\320\264\320\260\320\275\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\204\320\276\321\200\320\274\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
