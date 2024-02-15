#include "human.h"

Human::Human(QObject *parent): QAbstractItemModel()
{

};
//Human::Human(QObject *parent): QAbstractItemModel()
//{

//    name = "Andrew";
//    age = 21;
//    phoneNumber = "+79030433349";
//    citizenship = "Russian Federation";
//    car = "Lada Granta";
//    PassportID = "it's a confindetion information";

//};
Human::~Human(){

};

QString Human::getName(){
    return name;
}
QString Human::getphoneNumber(){
    return phoneNumber;
}
unsigned int Human::getAge(){
    return age;
}
QString Human::getCitizenship(){
    return citizenship;
}
QString Human::getCar(){
    return car;
}
QString Human::getPassportId(){
    return PassportID;
}


void Human::setName(QString str){
    name = str;
}
void Human::setphoneNumber(QString str){
    phoneNumber = str;
}
void Human::setAge(unsigned int str){
    age = str;
}

void Human::setDefault()
{
    name = "Andrew";
    age = 21;
    phoneNumber = "+79030433349";
    citizenship = "Russian Federation";
    car = "Lada Granta";
    PassportID = "it's a confindetional information";
}

int Human::columnCount(const QModelIndex &) const
{
    return 1;
}

int Human::rowCount(const QModelIndex &) const
{
    return m_data.size();
}

QVariant Human::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        return m_data.at(index.row());
    }
    return QVariant();
}

QModelIndex Human::index(int row, int column, const QModelIndex &) const
{
    return createIndex(row, column, (void*)&m_data[row]);
}

QModelIndex Human::parent(const QModelIndex &) const
{
    return QModelIndex();
}

void Human::setCitizenship(QString str){
     citizenship = str;
}
void Human::setCar(QString str){
     car = str;
}
void Human::setPassportId(QString str){
     PassportID = str;
}
