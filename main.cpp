#include "widget.h"
#include "controller.h"
#include "human.h"
#include "contactmodel.h"
#include <QApplication>

int main(int argc, char *argv[])
{


    //Controller ctrl(QSharedPointer<Human> *human);
    QSharedPointer<Human> human(new Human);
    ContactModel contactmodel(human);
    QSharedPointer<ContactModel> contactModel_ptr(&contactmodel);
    QApplication a(argc, argv);
    Controller ctr(contactModel_ptr);
    QSharedPointer<Controller> controller_ptr(&ctr);
    Widget w(contactModel_ptr, controller_ptr);

    w.show();
    return a.exec();
}
