#ifndef LAB2MAIN_H
#define LAB2MAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Lab2Main; }
QT_END_NAMESPACE

class Lab2Main : public QMainWindow
{
    Q_OBJECT

public:
    Lab2Main(QWidget *parent = nullptr);
    ~Lab2Main();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_3_clicked();

    void on_checkBox_clicked();

    void on_NextButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(const QString &arg1);

    void on_pushButton_3_clicked();

    void on_spinBox_3_valueChanged(const QString &arg1);

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);



private:
    Ui::Lab2Main *ui;
    void calculate();
    void max();
    QString dateToString(QDateTime );
    void displaydate();
    void displaycard();
    QPixmap imageresort;
    QPixmap imageresort2;
    QPixmap imageresort3;
    QPixmap imageresort4;

    void loadImage();
};
#endif // LAB2MAIN_H
