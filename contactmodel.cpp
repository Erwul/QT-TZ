#include "contactmodel.h"

ContactModel::ContactModel(QSharedPointer<Human> human) : human_(human)
{
human_ = human;
}

QString ContactModel::showPhone()
{

    return human_->getPhone();
}
void ContactModel::changePhone(const QString s)
{
    human_->setPhone(s);
}
QString ContactModel:: showFullName()
{
    return human_->getfullName();
}
void ContactModel::setFullName(const QString s)
{
    human_->setFullName(s);
}

int ContactModel::showAge()
{
    return human_->getAge();
}

void ContactModel::changeAge(const int s)
{
    human_->setAge(s);
}

QString ContactModel::showCountry()
{
    return human_->getCountry();
}

void ContactModel::changeCountry(const QString s)
{
    human_->setCountry(s);
}

int ContactModel::showWeight()
{
    return human_->getWeight();
}

void ContactModel::changeWeight(const int s)
{
    human_->setWeight(s);
}

QString ContactModel::showID()
{
    return human_->getID();
}

void ContactModel::changeID(const QString s)
{
    human_->setID(s);
}

void ContactModel::interaction()
{

    // создать сигнал который будет вызывать метод update в ui и вставить интеракшн при каждой записи контента в модель
}
