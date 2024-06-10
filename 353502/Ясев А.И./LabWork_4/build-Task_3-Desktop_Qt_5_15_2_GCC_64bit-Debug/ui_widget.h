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
    QPushButton *shufflePushButton;
    QPushButton *newPushButton;
    QPushButton *mediansPushButton;
    QListWidget *listWidgetMedians;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 10, 261, 581));
        clearPushButton = new QPushButton(Widget);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));
        clearPushButton->setGeometry(QRect(650, 70, 105, 30));
        addPushButton = new QPushButton(Widget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));
        addPushButton->setGeometry(QRect(650, 20, 105, 30));
        shufflePushButton = new QPushButton(Widget);
        shufflePushButton->setObjectName(QString::fromUtf8("shufflePushButton"));
        shufflePushButton->setGeometry(QRect(640, 220, 105, 30));
        newPushButton = new QPushButton(Widget);
        newPushButton->setObjectName(QString::fromUtf8("newPushButton"));
        newPushButton->setGeometry(QRect(650, 140, 105, 30));
        mediansPushButton = new QPushButton(Widget);
        mediansPushButton->setObjectName(QString::fromUtf8("mediansPushButton"));
        mediansPushButton->setGeometry(QRect(660, 300, 105, 30));
        listWidgetMedians = new QListWidget(Widget);
        listWidgetMedians->setObjectName(QString::fromUtf8("listWidgetMedians"));
        listWidgetMedians->setGeometry(QRect(330, 10, 261, 571));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        clearPushButton->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
        addPushButton->setText(QCoreApplication::translate("Widget", "Generate", nullptr));
        shufflePushButton->setText(QCoreApplication::translate("Widget", "Shuffle", nullptr));
        newPushButton->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        mediansPushButton->setText(QCoreApplication::translate("Widget", "Medians", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
