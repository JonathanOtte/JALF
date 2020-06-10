/********************************************************************************
** Form generated from reading UI file 'windowlebensm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLEBENSM_H
#define UI_WINDOWLEBENSM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowLebensm
{
public:
    QPushButton *cmdHauptmenu;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdBestand;
    QPushButton *cmdEinkaufsliste;
    QPushButton *cmdAddEinkauf;

    void setupUi(QDialog *WindowLebensm)
    {
        if (WindowLebensm->objectName().isEmpty())
            WindowLebensm->setObjectName(QString::fromUtf8("WindowLebensm"));
        WindowLebensm->resize(403, 272);
        cmdHauptmenu = new QPushButton(WindowLebensm);
        cmdHauptmenu->setObjectName(QString::fromUtf8("cmdHauptmenu"));
        cmdHauptmenu->setGeometry(QRect(170, 230, 80, 22));
        widget = new QWidget(WindowLebensm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 40, 221, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cmdBestand = new QPushButton(widget);
        cmdBestand->setObjectName(QString::fromUtf8("cmdBestand"));

        verticalLayout->addWidget(cmdBestand);

        cmdEinkaufsliste = new QPushButton(widget);
        cmdEinkaufsliste->setObjectName(QString::fromUtf8("cmdEinkaufsliste"));

        verticalLayout->addWidget(cmdEinkaufsliste);

        cmdAddEinkauf = new QPushButton(widget);
        cmdAddEinkauf->setObjectName(QString::fromUtf8("cmdAddEinkauf"));

        verticalLayout->addWidget(cmdAddEinkauf);


        retranslateUi(WindowLebensm);

        QMetaObject::connectSlotsByName(WindowLebensm);
    } // setupUi

    void retranslateUi(QDialog *WindowLebensm)
    {
        WindowLebensm->setWindowTitle(QApplication::translate("WindowLebensm", "Dialog", nullptr));
        cmdHauptmenu->setText(QApplication::translate("WindowLebensm", "Hauptmen\303\274", nullptr));
        cmdBestand->setText(QApplication::translate("WindowLebensm", "Aktueller Bestand", nullptr));
        cmdEinkaufsliste->setText(QApplication::translate("WindowLebensm", "Einkaufsliste", nullptr));
        cmdAddEinkauf->setText(QApplication::translate("WindowLebensm", "Einkauf hinzuf\303\274gen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowLebensm: public Ui_WindowLebensm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLEBENSM_H
