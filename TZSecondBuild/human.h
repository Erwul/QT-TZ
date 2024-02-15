#ifndef HUMAN_H
#define HUMAN_H
#include <QDialog>
#include <QObject>
#include <QAbstractItemModel>
#include <QStringList>

class Human : public QAbstractItemModel
{
    Q_OBJECT

    QStringList m_data;
private :
    QString name;
    unsigned int age;
    QString phoneNumber;
    QString citizenship;
    QString car;
    QString PassportID;
public:
    Human(QObject *parent);
    ~Human();
    QString getName();
    QString getphoneNumber();
    QString getCitizenship();
    QString getCar();
    QString getPassportId();
    unsigned int getAge();

    void setName(QString str);
    void setphoneNumber(QString str);
    void setCitizenship(QString str);
    void setCar(QString str);
    void setPassportId(QString str);
    void setAge(unsigned int);
    void setDefault();

    virtual int columnCount(const QModelIndex &parent) const;
    virtual int rowCount(const QModelIndex &parent) const;
    virtual QVariant data(const QModelIndex &index, int role) const;
    virtual QModelIndex index(int row, int column, const QModelIndex &parent) const;
    virtual QModelIndex parent(const QModelIndex &index) const;

};

#endif // HUMAN_H
