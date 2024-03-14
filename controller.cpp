#include "controller.h"


//Controller::Controller(QSharedPointer<ContactModel> model) : contactmodel_(model){}
Controller::Controller(QSharedPointer<ContactModel> model) : contactmodel_(model){}
void Controller::changePhoneN(QString s)
{
  contactmodel_->changePhone(s);
}

void Controller::changeNameN(QString s)
{
  contactmodel_->setFullName(s);

}

void Controller::changeAgeN(const int s)
{
    contactmodel_->changeAge(s);
}

void Controller::changeIDN(const QString s)
{
    contactmodel_->changeID(s);
}

void Controller::changeWeightN(const int s)
{
    contactmodel_->changeWeight(s);
}

void Controller::changeCountryN(const QString s)
{
    contactmodel_->changeCountry(s);
}

