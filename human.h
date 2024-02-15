#ifndef HUMAN_H
#define HUMAN_H
#include <QDialog>
#include <QObject>
#include <QtWidgets/QFileDialog>


class Human : public QDialog
{
    Q_OBJECT
private :
    QString name;
    unsigned __int8 age;
    QString phoneNumber;
    QString citizenship;
    QString car;
    QString PassportID;
public:
    Human();
    ~Human();
    QString getName();
    QString getphoneNumber();
    QString getCitizenship();
    QString getCar();
    QString getPassportId();
    unsigned __int8 getAge();

    void setName(QString str);
    void setphoneNumber(QString str);
    void setCitizenship(QString str);
    void setCar(QString str);
    void setPassportId(QString str);
    void setAge(unsigned __int8);
};

#endif // HUMAN_H
