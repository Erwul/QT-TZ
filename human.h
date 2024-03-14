#ifndef HUMAN_H
#define HUMAN_H

#include <QObject>

class Human : public QObject
{
    Q_OBJECT
public:
    Human();
    ~Human();
    //explicit Human(QObject *parent = nullptr);
    //getters
    QString getfullName();
    int getAge();
    QString getPhone();
    QString getCountry();
    QString getID();
    int getWeight();
    //setters
    void setFullName(const QString &fullname);
    void setAge(const int &age);
    void setPhone(const QString &phone);
    void setCountry(const QString &country);
    void setID(const QString &ID);
    void setWeight(const int &weight);
signals:
private:
    QString fullName;   //Диалог с подтвержением
    int age;        //Реал тайм диалог
    QString phone;  //Диалог с подтвеждением
    QString ID;     //Реал тайм диалог
    int weight;     //Табличная реализация
    QString country; //Табличная реализация
};

#endif // HUMAN_H
