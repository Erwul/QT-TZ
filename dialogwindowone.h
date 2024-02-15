#ifndef DIALOGWINDOWONE_H
#define DIALOGWINDOWONE_H

#include <QDialog>

namespace Ui {
class DialogWindowOne;
}

class DialogWindowOne : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWindowOne(QWidget *parent = nullptr);
    ~DialogWindowOne();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::DialogWindowOne *ui;
};

#endif // DIALOGWINDOWONE_H
