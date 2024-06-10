/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QDateEdit *dateEdit;
    QLabel *label;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1554, 939);
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 80, 771, 441));
        dateEdit = new QDateEdit(Widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(830, 100, 121, 29));
        dateEdit->setDateTime(QDateTime(QDate(2004, 2, 29), QTime(1, 0, 0)));
        dateEdit->setDate(QDate(2004, 2, 29));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(830, 70, 101, 21));
        addButton = new QPushButton(Widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(820, 150, 105, 30));
        editButton = new QPushButton(Widget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(820, 190, 105, 30));
        deleteButton = new QPushButton(Widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(820, 240, 105, 30));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(970, 100, 105, 30));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("Widget", "dd/MM/yyyy", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Birthday", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        editButton->setText(QCoreApplication::translate("Widget", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("Widget", "Delete", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "SetNew", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
