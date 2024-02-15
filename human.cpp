#include "human.h"

Human::Human(){

    name = "Andrew";
    age = 21;
    phoneNumber = "+79030433349";
    citizenship = "Russian Federation";
    car = "Lada Granta";
    PassportID = "it's a confindetion information";

};
Human::~Human(){

};

QString Human::getName(){
    return name;
}
QString Human::getphoneNumber(){
    return phoneNumber;
}
unsigned __int8 Human::getAge(){
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
void Human::setAge(unsigned __int8 str){
     age = str;
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
