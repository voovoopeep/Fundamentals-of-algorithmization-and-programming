/********************************************************************************
** Form generated from reading UI file 'stepdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEPDIALOG_H
#define UI_STEPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_StepDialog
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

    void setupUi(QDialog *StepDialog)
    {
        if (StepDialog->objectName().isEmpty())
            StepDialog->setObjectName(QString::fromUtf8("StepDialog"));
        StepDialog->resize(885, 745);
        buttonBox = new QDialogButtonBox(StepDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(780, 10, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(StepDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 10, 381, 711));

        retranslateUi(StepDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StepDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StepDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StepDialog);
    } // setupUi

    void retranslateUi(QDialog *StepDialog)
    {
        StepDialog->setWindowTitle(QCoreApplication::translate("StepDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StepDialog: public Ui_StepDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEPDIALOG_H
