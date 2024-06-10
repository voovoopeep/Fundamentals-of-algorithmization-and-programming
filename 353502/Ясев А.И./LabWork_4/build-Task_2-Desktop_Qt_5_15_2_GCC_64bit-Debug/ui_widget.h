/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListWidget *listWidget;
    QPushButton *clearPushButton;
    QPushButton *addPushButton;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *timeLabel;
    QPushButton *shufflePushButton;
    QPushButton *searchButton;
    QLabel *label_2;
    QLabel *searchLabel;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *resultLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 10, 581, 581));
        clearPushButton = new QPushButton(Widget);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));
        clearPushButton->setGeometry(QRect(650, 70, 105, 30));
        addPushButton = new QPushButton(Widget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));
        addPushButton->setGeometry(QRect(650, 20, 105, 30));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 110, 151, 41));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(650, 170, 121, 21));
        timeLabel = new QLabel(Widget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(650, 200, 111, 21));
        shufflePushButton = new QPushButton(Widget);
        shufflePushButton->setObjectName(QString::fromUtf8("shufflePushButton"));
        shufflePushButton->setGeometry(QRect(640, 220, 105, 30));
        searchButton = new QPushButton(Widget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(630, 260, 171, 30));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(640, 300, 79, 21));
        searchLabel = new QLabel(Widget);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        searchLabel->setGeometry(QRect(640, 330, 79, 21));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 380, 105, 30));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(650, 440, 79, 21));
        resultLabel = new QLabel(Widget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(640, 480, 79, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        clearPushButton->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
        addPushButton->setText(QCoreApplication::translate("Widget", "Generate", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Interpolation sort", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Time (millis):", nullptr));
        timeLabel->setText(QCoreApplication::translate("Widget", "0", nullptr));
        shufflePushButton->setText(QCoreApplication::translate("Widget", "Shuffle", nullptr));
        searchButton->setText(QCoreApplication::translate("Widget", "Interpolation search", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Index:", nullptr));
        searchLabel->setText(QCoreApplication::translate("Widget", "-1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "BinPow", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Result:", nullptr));
        resultLabel->setText(QCoreApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
