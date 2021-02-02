#include "lab2main.h"
#include "ui_lab2main.h"
#include "iostream"
#include <QMenuBar>
#include <QPalette>

Lab2Main::Lab2Main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab2Main)
{
    ui->setupUi(this);



    loadImage();

    ui->imagelabel->setPixmap(imageresort);
    ui->imagelabel2->setPixmap(imageresort2);
    ui->imagelabel3->setPixmap(imageresort3);
    ui->imagelabel4->setPixmap(imageresort4);

    calculate();
    max();
    ui->dateEdit->setDate(QDate::currentDate());
    displaydate();







}

void Lab2Main::loadImage(){

    QString resortFilename = "resort.jpg";
    QString resortFilename1 = "resort1.jpg";
    QString resortFilename2 = "resort2.jpg";
    QString resortFilename3 = "resort3.jpg";

    if(imageresort.load(resortFilename)){
        std::cout << "image loaded" << std::endl;
        imageresort = imageresort.scaled(ui->imagelabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(imageresort2.load(resortFilename1)){
        std::cout << "image loaded" << std::endl;
        imageresort2 = imageresort2.scaled(ui->imagelabel2->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(imageresort3.load(resortFilename2)){
        std::cout << "image loaded" << std::endl;
        imageresort3 = imageresort3.scaled(ui->imagelabel3->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(imageresort4.load(resortFilename3)){
        std::cout << "image loaded" << std::endl;
        imageresort4 = imageresort4.scaled(ui->imagelabel->size(), Qt::KeepAspectRatioByExpanding);
    }


}


void Lab2Main::displaydate(){

    QDateTime d = ui->dateEdit->dateTime();

    QString day = d.toString("dd");
    QString month = d.toString("MM");
    QString year = d.toString("yyyy");

    QString string = d.toString("MM")+"/"+d.toString("dd")+"/"+d.toString("yyyy");
    ui->label_34->setText(string);


}

void Lab2Main::displaycard(){
    QString card = ui->cardNumber->text();
    QString number = card.right(4);

    ui->paymentinfo->setText("Paid with creditcard ending with "+number);


}


void Lab2Main::calculate(){
    double subtotal=0.0;
    double roomtotal;
    double tax;
    double parking = 0;
    double resortfee;
    const double resortfeeperday = 15;
    double total;
    int days = ui->spinBox_3->value();

    if(ui->radioButton->isChecked() && ui->radioButton_4->isChecked()){                           //all 4 rooms
           subtotal = 284;
           roomtotal = 284;
           ui->roomLabel->setText("Standard 2 Queen Bedroom");
    }
    if(ui->radioButton_2->isChecked() && ui->radioButton_4->isChecked()){
           subtotal = 290;
           roomtotal = 290;
           ui->roomLabel->setText("Standard 1 King Bedroom");
    }
    if(ui->radioButton->isChecked() && ui->radioButton_3->isChecked()){
           subtotal = 325;
           roomtotal = 325;
           ui->roomLabel->setText("Atrium 2 Queen Bedroom");
    }
    if(ui->radioButton_2->isChecked() && ui->radioButton_3->isChecked()){
           subtotal = 350;
           roomtotal = 350;
           ui->roomLabel->setText("Atrium 1 King Bedroom");
    }
    if(ui->checkBox->isChecked()){
           subtotal += 12.75;
           parking = 12.75 * days;
           ui->parkinglabel->setText("Yes");
    }
    else{
        ui->parkinglabel->setText("No");
    }

    subtotal = subtotal * days;
    roomtotal = roomtotal * days;
    tax = roomtotal * 0.15;
    resortfee = resortfeeperday * days;
    total = roomtotal + tax + parking + resortfee;


    ui->estimatePrice->setText("$"+QString::number(subtotal));
    ui->label_20->setText("$"+QString::number(roomtotal));
    ui->label_21->setText("$"+QString::number(tax));
    ui->label_22->setText("$"+QString::number(parking));
    ui->label_23->setText("$"+QString::number(resortfee));
    ui->label_24->setText("$"+QString::number(total));

    ui->label_35->setText(QString::number(days));

    ui->adultdisplay->setText(QString::number( ui->spinBox->value()));
    ui->childrendisplay->setText(QString::number( ui->spinBox_2->value()));
    ui->totalLabel->setText("$"+QString::number(total));


}

void Lab2Main::max(){
    if (ui->radioButton->isChecked()){                                     //max total number of adults + children is 4 or 3 depending on the room
        ui->spinBox_2->setMaximum(4 - ui->spinBox->value());
        ui->spinBox->setMaximum(4 - ui->spinBox_2->value());
    }
    if (ui->radioButton_2->isChecked()){
        if (ui->spinBox->value() == 1){                             // only case for maximum guest. if adult value is 1, children value will be reduced first. (in the case of 1 adult and 3 children, clicking the king size room will result in 1 adult 2 children instead of 0 adults 3 children)
        ui->spinBox_2->setMaximum(3 - ui->spinBox->value());
        ui->spinBox->setMaximum(3 - ui->spinBox_2->value());
        }
        else{
        ui->spinBox->setMaximum(3 - ui->spinBox_2->value());        // to account for the case 4 adults 0 children, clicking king size bed from queen size will result in 3 adults 0 children instead of 4 adults -1 children. the order of the 2 lines of code does not matter in any other case.
        ui->spinBox_2->setMaximum(3 - ui->spinBox->value());

        }
    }

}

Lab2Main::~Lab2Main()
{
    delete ui;
}


void Lab2Main::on_radioButton_clicked()
{
    calculate();
    max();
}

void Lab2Main::on_radioButton_2_clicked()
{
    calculate();
    max();
}

void Lab2Main::on_radioButton_4_clicked()
{
    calculate();
    max();
}

void Lab2Main::on_radioButton_3_clicked()
{
    calculate();
    max();
}

void Lab2Main::on_checkBox_clicked()
{
    calculate();
}

void Lab2Main::on_NextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Lab2Main::on_spinBox_valueChanged(int arg1)
{
    max();
    calculate();
}

void Lab2Main::on_spinBox_2_valueChanged(const QString &arg1)
{
    max();
    calculate();
}

void Lab2Main::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Lab2Main::on_spinBox_3_valueChanged(const QString &arg1)
{
    calculate();
}

void Lab2Main::on_radioButton_5_clicked()
{
    ui->cardNumber->setInputMask("3999-999999-99999");
    ui->cardNumber->setText("");
}

void Lab2Main::on_radioButton_6_clicked()
{
    ui->cardNumber->setInputMask("4999-9999-9999-9999");
    ui->cardNumber->setText("");
}

void Lab2Main::on_radioButton_7_clicked()
{
    ui->cardNumber->setInputMask("5999-9999-9999-9999");
    ui->cardNumber->setText("");
}

void Lab2Main::on_radioButton_8_clicked()
{
    ui->cardNumber->setInputMask("6999-9999-9999-9999");
    ui->cardNumber->setText("");
}

void Lab2Main::on_pushButton_2_clicked()
{

    ui->stackedWidget->setCurrentIndex(2);
    displaycard();
}

void Lab2Main::on_dateEdit_userDateChanged(const QDate &date)
{
    displaydate();
}


