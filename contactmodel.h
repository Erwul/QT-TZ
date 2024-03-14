#ifndef CONTACTMODEL_H
#define CONTACTMODEL_H
#include <QSharedPointer>
#include "human.h"
//#include "widget.h"
class ContactModel
{
public:    
    ContactModel(QSharedPointer<Human> human);;

    QString showPhone();
    void changePhone(const QString s);
    QString showFullName();
    void setFullName(const QString s);
    int showAge();
    void changeAge(const int s);
    QString showCountry();
    void changeCountry(const QString s);
    int showWeight();
    void changeWeight(const int s);
    QString showID();
    void changeID(const QString s);

    void interaction();

private:
    QSharedPointer<Human> human_;
signals:
   // void signalUpdate();
};

#endif // CONTACTMODEL_H
