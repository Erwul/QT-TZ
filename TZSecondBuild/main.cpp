#include "mainwindow.h"
#include <QIcon>
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;



    w.setWindowTitle("Тестовое задание");
    w.setWindowIcon(QIcon(":/face.png"));
    w.setFixedSize(800, 550);

    w.show();

    return a.exec();
}
