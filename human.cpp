#include "human.h"

//Human::Human(QObject *parent) : QObject(parent)
//{

//}
Human::Human()
{

}
Human::~Human()
{

}
// getter realization
QString Human::getfullName()
{
    return fullName;
}

int Human::getAge()
{
    return age;
}

QString Human::getPhone()
{
    return phone;
}

QString Human::getCountry()
{
    return country;
}

QString Human::getID()
{
    return ID;
}

int Human::getWeight()
{
    return weight;
}
//setters realization
void Human::setFullName( const QString &fullname)
{
    fullName = fullname;
}

void Human::setAge(const int &age)
{
    this->age = age;
}

void Human::setPhone(const QString &phone)
{
    this->phone = phone;
}

void Human::setCountry(const QString &country)
{
    this->country = country;
}

void Human::setID(const QString &ID)
{
    this->ID = ID;
}

void Human::setWeight(const int &weight)
{
    this->weight = weight;
}





