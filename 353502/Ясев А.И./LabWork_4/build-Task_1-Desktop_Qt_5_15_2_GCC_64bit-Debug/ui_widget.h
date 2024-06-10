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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListWidget *listWidget;
    QPushButton *clearPushButton;
    QPushButton *addPushButton;
    QPushButton *pushButton;
    QRadioButton *quickRadioButton;
    QRadioButton *mergeRadioButton;
    QRadioButton *hepRadioButton;
    QLabel *label;
    QLabel *timeLabel;
    QPushButton *shufflePushButton;
    QPushButton *searchButton;
    QLabel *label_2;
    QLabel *searchLabel;

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
        pushButton->setGeometry(QRect(650, 120, 105, 30));
        quickRadioButton = new QRadioButton(Widget);
        quickRadioButton->setObjectName(QString::fromUtf8("quickRadioButton"));
        quickRadioButton->setGeometry(QRect(640, 170, 132, 27));
        quickRadioButton->setChecked(true);
        mergeRadioButton = new QRadioButton(Widget);
        mergeRadioButton->setObjectName(QString::fromUtf8("mergeRadioButton"));
        mergeRadioButton->setGeometry(QRect(640, 220, 132, 27));
        hepRadioButton = new QRadioButton(Widget);
        hepRadioButton->setObjectName(QString::fromUtf8("hepRadioButton"));
        hepRadioButton->setGeometry(QRect(640, 270, 132, 27));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(650, 320, 121, 21));
        timeLabel = new QLabel(Widget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(650, 360, 111, 21));
        shufflePushButton = new QPushButton(Widget);
        shufflePushButton->setObjectName(QString::fromUtf8("shufflePushButton"));
        shufflePushButton->setGeometry(QRect(640, 440, 105, 30));
        searchButton = new QPushButton(Widget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(640, 480, 121, 30));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(640, 520, 79, 21));
        searchLabel = new QLabel(Widget);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        searchLabel->setGeometry(QRect(640, 550, 79, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        clearPushButton->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
        addPushButton->setText(QCoreApplication::translate("Widget", "Generate", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Sort", nullptr));
        quickRadioButton->setText(QCoreApplication::translate("Widget", "Quick", nullptr));
        mergeRadioButton->setText(QCoreApplication::translate("Widget", "Merge", nullptr));
        hepRadioButton->setText(QCoreApplication::translate("Widget", "Heap", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Time (millis):", nullptr));
        timeLabel->setText(QCoreApplication::translate("Widget", "0", nullptr));
        shufflePushButton->setText(QCoreApplication::translate("Widget", "Shuffle", nullptr));
        searchButton->setText(QCoreApplication::translate("Widget", "Binary search", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Index:", nullptr));
        searchLabel->setText(QCoreApplication::translate("Widget", "-1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
