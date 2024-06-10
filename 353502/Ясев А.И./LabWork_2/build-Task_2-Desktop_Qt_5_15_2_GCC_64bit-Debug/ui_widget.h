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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListWidget *listWidget;
    QPushButton *addPushButton;
    QPushButton *updatePushButton;
    QPushButton *deletePushButton;
    QPushButton *readPushButton;
    QPushButton *writePushButton;
    QPushButton *sortPushButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QLineEdit *lessThanLineEdit;
    QLineEdit *searchLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 20, 301, 381));
        addPushButton = new QPushButton(Widget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));
        addPushButton->setGeometry(QRect(350, 20, 105, 30));
        updatePushButton = new QPushButton(Widget);
        updatePushButton->setObjectName(QString::fromUtf8("updatePushButton"));
        updatePushButton->setGeometry(QRect(350, 60, 105, 30));
        deletePushButton = new QPushButton(Widget);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setGeometry(QRect(350, 100, 105, 30));
        readPushButton = new QPushButton(Widget);
        readPushButton->setObjectName(QString::fromUtf8("readPushButton"));
        readPushButton->setGeometry(QRect(350, 300, 105, 30));
        writePushButton = new QPushButton(Widget);
        writePushButton->setObjectName(QString::fromUtf8("writePushButton"));
        writePushButton->setGeometry(QRect(350, 350, 105, 30));
        sortPushButton = new QPushButton(Widget);
        sortPushButton->setObjectName(QString::fromUtf8("sortPushButton"));
        sortPushButton->setGeometry(QRect(660, 20, 105, 30));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(660, 150, 105, 30));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 290, 105, 30));
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(650, 550, 141, 27));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(670, 500, 105, 30));
        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(670, 60, 96, 29));
        lessThanLineEdit = new QLineEdit(Widget);
        lessThanLineEdit->setObjectName(QString::fromUtf8("lessThanLineEdit"));
        lessThanLineEdit->setGeometry(QRect(660, 190, 113, 28));
        searchLineEdit = new QLineEdit(Widget);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(660, 330, 113, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        addPushButton->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        updatePushButton->setText(QCoreApplication::translate("Widget", "Update", nullptr));
        deletePushButton->setText(QCoreApplication::translate("Widget", "Delete", nullptr));
        readPushButton->setText(QCoreApplication::translate("Widget", "Read", nullptr));
        writePushButton->setText(QCoreApplication::translate("Widget", "Write", nullptr));
        sortPushButton->setText(QCoreApplication::translate("Widget", "Sort", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "LessThan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Search", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "Show full info", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "ShowAll", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "code", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "name", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "price", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
