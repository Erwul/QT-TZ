#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "human.h"
#include "contactmodel.h"

class Controller : public QObject
{
    Q_OBJECT
public:
   // Controller(QSharedPointer<ContactModel> model);;
    Controller(QSharedPointer<ContactModel> model);;
    void changePhoneN(const QString s);
    void changeNameN(const QString s);
    void changeAgeN(const int s);
    void changeIDN(const QString s);
    void changeWeightN(const int s);
    void changeCountryN(const QString s);

private:
//QSharedPointer<ContactModel> contactmodel_;
QSharedPointer<ContactModel> contactmodel_;
signals:

};

#endif // CONTROLLER_H
