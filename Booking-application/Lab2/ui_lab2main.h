/********************************************************************************
** Form generated from reading UI file 'lab2main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB2MAIN_H
#define UI_LAB2MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab2Main
{
public:
    QWidget *centralwidget;
    QLabel *imagelabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_9;
    QLabel *label_10;
    QCheckBox *checkBox;
    QPushButton *NextButton;
    QLabel *label_11;
    QLabel *estimatePrice;
    QLabel *label_14;
    QLabel *label_7;
    QSpinBox *spinBox_3;
    QWidget *page2;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QLineEdit *cardNumber;
    QLabel *label_37;
    QLabel *label_38;
    QLineEdit *lineEdit_2;
    QWidget *page3;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *roomLabel;
    QLabel *parkinglabel;
    QLabel *adultdisplay;
    QLabel *childrendisplay;
    QLabel *label_36;
    QLabel *label_39;
    QLabel *totalLabel;
    QLabel *paymentinfo;
    QLabel *label_40;
    QLabel *imagelabel2;
    QLabel *imagelabel3;
    QLabel *imagelabel4;
    QMenuBar *menubar;
    QMenu *menuHotel_Reservation;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lab2Main)
    {
        if (Lab2Main->objectName().isEmpty())
            Lab2Main->setObjectName(QString::fromUtf8("Lab2Main"));
        Lab2Main->resize(839, 590);
        Lab2Main->setAutoFillBackground(false);
        Lab2Main->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 247, 254, 255));"));
        centralwidget = new QWidget(Lab2Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        imagelabel = new QLabel(centralwidget);
        imagelabel->setObjectName(QString::fromUtf8("imagelabel"));
        imagelabel->setGeometry(QRect(20, 30, 171, 71));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 50, 561, 471));
        stackedWidget->setAutoFillBackground(false);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 121, 31));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(190, 60, 351, 31));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 110, 111, 31));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 190, 91, 16));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 190, 101, 16));
        spinBox = new QSpinBox(page);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(270, 190, 42, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(4);
        spinBox_2 = new QSpinBox(page);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(430, 190, 42, 22));
        spinBox_2->setMaximum(4);
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 190, 56, 16));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 240, 56, 16));
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(190, 240, 110, 22));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(190, 120, 31, 16));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 100, 120, 80));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 40, 97, 20));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(0, 20, 97, 20));
        radioButton->setChecked(true);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(430, 100, 111, 80));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 40, 97, 20));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(0, 20, 97, 20));
        radioButton_4->setChecked(true);
        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 120, 41, 16));
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 330, 121, 16));
        checkBox = new QCheckBox(page);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(190, 330, 83, 20));
        checkBox->setChecked(false);
        NextButton = new QPushButton(page);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setGeometry(QRect(440, 410, 93, 28));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 370, 111, 16));
        estimatePrice = new QLabel(page);
        estimatePrice->setObjectName(QString::fromUtf8("estimatePrice"));
        estimatePrice->setGeometry(QRect(190, 370, 201, 21));
        label_14 = new QLabel(page);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(50, 20, 211, 21));
        QFont font;
        font.setPointSize(14);
        label_14->setFont(font);
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 280, 91, 16));
        spinBox_3 = new QSpinBox(page);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(190, 280, 42, 22));
        spinBox_3->setMinimum(1);
        spinBox_3->setMaximum(7);
        stackedWidget->addWidget(page);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        label_13 = new QLabel(page2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 10, 271, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label_13->setFont(font1);
        label_15 = new QLabel(page2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(50, 90, 56, 16));
        label_16 = new QLabel(page2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(50, 130, 71, 16));
        label_17 = new QLabel(page2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 170, 81, 16));
        label_18 = new QLabel(page2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(50, 210, 71, 16));
        label_19 = new QLabel(page2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(50, 250, 71, 16));
        pushButton_2 = new QPushButton(page2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 410, 93, 28));
        pushButton_3 = new QPushButton(page2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 410, 93, 28));
        label_20 = new QLabel(page2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(160, 90, 151, 16));
        label_21 = new QLabel(page2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(160, 130, 161, 16));
        label_22 = new QLabel(page2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(160, 170, 161, 16));
        label_23 = new QLabel(page2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(160, 210, 161, 16));
        label_24 = new QLabel(page2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(160, 250, 161, 16));
        label_25 = new QLabel(page2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(50, 290, 56, 16));
        groupBox_3 = new QGroupBox(page2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(110, 270, 151, 141));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 20, 131, 20));
        radioButton_6 = new QRadioButton(groupBox_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(10, 50, 97, 20));
        radioButton_7 = new QRadioButton(groupBox_3);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(10, 80, 97, 20));
        radioButton_8 = new QRadioButton(groupBox_3);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(10, 110, 97, 20));
        cardNumber = new QLineEdit(page2);
        cardNumber->setObjectName(QString::fromUtf8("cardNumber"));
        cardNumber->setGeometry(QRect(350, 290, 201, 22));
        label_37 = new QLabel(page2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(270, 290, 81, 16));
        label_38 = new QLabel(page2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(270, 330, 81, 16));
        lineEdit_2 = new QLineEdit(page2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(350, 330, 71, 22));
        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        label_26 = new QLabel(page3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(50, 10, 271, 51));
        label_26->setFont(font1);
        label_27 = new QLabel(page3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(50, 80, 56, 16));
        QFont font2;
        font2.setPointSize(10);
        label_27->setFont(font2);
        label_28 = new QLabel(page3);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(90, 110, 56, 16));
        label_29 = new QLabel(page3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(90, 140, 56, 16));
        label_30 = new QLabel(page3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(90, 170, 71, 16));
        label_31 = new QLabel(page3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(90, 200, 111, 16));
        label_32 = new QLabel(page3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(90, 230, 81, 16));
        label_33 = new QLabel(page3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(270, 230, 101, 16));
        label_34 = new QLabel(page3);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(210, 110, 111, 16));
        label_35 = new QLabel(page3);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(210, 140, 111, 16));
        roomLabel = new QLabel(page3);
        roomLabel->setObjectName(QString::fromUtf8("roomLabel"));
        roomLabel->setGeometry(QRect(210, 170, 321, 16));
        parkinglabel = new QLabel(page3);
        parkinglabel->setObjectName(QString::fromUtf8("parkinglabel"));
        parkinglabel->setGeometry(QRect(210, 200, 91, 16));
        adultdisplay = new QLabel(page3);
        adultdisplay->setObjectName(QString::fromUtf8("adultdisplay"));
        adultdisplay->setGeometry(QRect(210, 230, 51, 16));
        childrendisplay = new QLabel(page3);
        childrendisplay->setObjectName(QString::fromUtf8("childrendisplay"));
        childrendisplay->setGeometry(QRect(370, 230, 61, 16));
        label_36 = new QLabel(page3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(50, 280, 181, 21));
        label_36->setFont(font2);
        label_39 = new QLabel(page3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(90, 320, 91, 16));
        totalLabel = new QLabel(page3);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        totalLabel->setGeometry(QRect(220, 320, 56, 16));
        paymentinfo = new QLabel(page3);
        paymentinfo->setObjectName(QString::fromUtf8("paymentinfo"));
        paymentinfo->setGeometry(QRect(90, 350, 261, 16));
        label_40 = new QLabel(page3);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(130, 430, 351, 16));
        QFont font3;
        font3.setPointSize(9);
        label_40->setFont(font3);
        stackedWidget->addWidget(page3);
        imagelabel2 = new QLabel(centralwidget);
        imagelabel2->setObjectName(QString::fromUtf8("imagelabel2"));
        imagelabel2->setGeometry(QRect(20, 140, 171, 91));
        imagelabel3 = new QLabel(centralwidget);
        imagelabel3->setObjectName(QString::fromUtf8("imagelabel3"));
        imagelabel3->setGeometry(QRect(20, 260, 171, 91));
        imagelabel4 = new QLabel(centralwidget);
        imagelabel4->setObjectName(QString::fromUtf8("imagelabel4"));
        imagelabel4->setGeometry(QRect(20, 390, 171, 91));
        Lab2Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Lab2Main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 839, 26));
        menuHotel_Reservation = new QMenu(menubar);
        menuHotel_Reservation->setObjectName(QString::fromUtf8("menuHotel_Reservation"));
        Lab2Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Lab2Main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Lab2Main->setStatusBar(statusbar);

        menubar->addAction(menuHotel_Reservation->menuAction());

        retranslateUi(Lab2Main);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Lab2Main);
    } // setupUi

    void retranslateUi(QMainWindow *Lab2Main)
    {
        Lab2Main->setWindowTitle(QApplication::translate("Lab2Main", "Lab2Main", nullptr));
        imagelabel->setText(QApplication::translate("Lab2Main", "TextLabel", nullptr));
        label->setText(QApplication::translate("Lab2Main", "Reservation Name:", nullptr));
        label_2->setText(QApplication::translate("Lab2Main", "Room type:", nullptr));
        label_3->setText(QApplication::translate("Lab2Main", "Adults(18+):", nullptr));
        label_4->setText(QApplication::translate("Lab2Main", "No. of People:", nullptr));
        label_5->setText(QApplication::translate("Lab2Main", "Children:", nullptr));
        label_6->setText(QApplication::translate("Lab2Main", "Check-in:", nullptr));
        label_8->setText(QApplication::translate("Lab2Main", "Size:", nullptr));
        groupBox->setTitle(QString());
        radioButton_2->setText(QApplication::translate("Lab2Main", "1 King bed", nullptr));
        radioButton->setText(QApplication::translate("Lab2Main", "2 Queen bed", nullptr));
        groupBox_2->setTitle(QString());
        radioButton_3->setText(QApplication::translate("Lab2Main", "Atrium", nullptr));
        radioButton_4->setText(QApplication::translate("Lab2Main", "Standard", nullptr));
        label_9->setText(QApplication::translate("Lab2Main", "View:", nullptr));
        label_10->setText(QApplication::translate("Lab2Main", "Parking (+$12.75):", nullptr));
        checkBox->setText(QString());
        NextButton->setText(QApplication::translate("Lab2Main", "Next", nullptr));
        label_11->setText(QApplication::translate("Lab2Main", "Estimated price:", nullptr));
        estimatePrice->setText(QString());
        label_14->setText(QApplication::translate("Lab2Main", "Reservation Details", nullptr));
        label_7->setText(QApplication::translate("Lab2Main", "Days of stay:", nullptr));
        label_13->setText(QApplication::translate("Lab2Main", "Cost and Payment", nullptr));
        label_15->setText(QApplication::translate("Lab2Main", "Room:", nullptr));
        label_16->setText(QApplication::translate("Lab2Main", "Tax(15%):", nullptr));
        label_17->setText(QApplication::translate("Lab2Main", "Parking fee:", nullptr));
        label_18->setText(QApplication::translate("Lab2Main", "Resort fee:", nullptr));
        label_19->setText(QApplication::translate("Lab2Main", "Total Due:", nullptr));
        pushButton_2->setText(QApplication::translate("Lab2Main", "Pay", nullptr));
        pushButton_3->setText(QApplication::translate("Lab2Main", "Back", nullptr));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QApplication::translate("Lab2Main", "Payment:", nullptr));
        groupBox_3->setTitle(QString());
        radioButton_5->setText(QApplication::translate("Lab2Main", "American Express", nullptr));
        radioButton_6->setText(QApplication::translate("Lab2Main", "Visa", nullptr));
        radioButton_7->setText(QApplication::translate("Lab2Main", "MasterCard", nullptr));
        radioButton_8->setText(QApplication::translate("Lab2Main", "Discover", nullptr));
        cardNumber->setText(QString());
        label_37->setText(QApplication::translate("Lab2Main", "Card number:", nullptr));
        label_38->setText(QApplication::translate("Lab2Main", "Expiry Date:", nullptr));
        lineEdit_2->setInputMask(QApplication::translate("Lab2Main", "B9/2999", nullptr));
        label_26->setText(QApplication::translate("Lab2Main", "Reservation Confirmation", nullptr));
        label_27->setText(QApplication::translate("Lab2Main", "Details:", nullptr));
        label_28->setText(QApplication::translate("Lab2Main", "First Day:", nullptr));
        label_29->setText(QApplication::translate("Lab2Main", "Nights:", nullptr));
        label_30->setText(QApplication::translate("Lab2Main", "Room type:", nullptr));
        label_31->setText(QApplication::translate("Lab2Main", "Parking included:", nullptr));
        label_32->setText(QApplication::translate("Lab2Main", "No. of Adults:", nullptr));
        label_33->setText(QApplication::translate("Lab2Main", "No. of children:", nullptr));
        label_34->setText(QString());
        label_35->setText(QString());
        roomLabel->setText(QString());
        parkinglabel->setText(QString());
        adultdisplay->setText(QString());
        childrendisplay->setText(QString());
        label_36->setText(QApplication::translate("Lab2Main", "Payment Information:", nullptr));
        label_39->setText(QApplication::translate("Lab2Main", "Total amount:", nullptr));
        totalLabel->setText(QString());
        paymentinfo->setText(QString());
        label_40->setText(QApplication::translate("Lab2Main", "Thank you for your reservation at our hotel resort", nullptr));
        imagelabel2->setText(QApplication::translate("Lab2Main", "TextLabel", nullptr));
        imagelabel3->setText(QApplication::translate("Lab2Main", "TextLabel", nullptr));
        imagelabel4->setText(QApplication::translate("Lab2Main", "TextLabel", nullptr));
        menuHotel_Reservation->setTitle(QApplication::translate("Lab2Main", "Hotel Reservation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab2Main: public Ui_Lab2Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB2MAIN_H
