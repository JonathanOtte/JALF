/********************************************************************************
** Form generated from reading UI file 'windowessenspl.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWESSENSPL_H
#define UI_WINDOWESSENSPL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowEssenspl
{
public:
    QPushButton *cmdHauptmenu;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdRzptEntdecken;
    QPushButton *cmdPlanung;
    QPushButton *cmdInspiration;

    void setupUi(QDialog *WindowEssenspl)
    {
        if (WindowEssenspl->objectName().isEmpty())
            WindowEssenspl->setObjectName(QString::fromUtf8("WindowEssenspl"));
        WindowEssenspl->resize(401, 269);
        cmdHauptmenu = new QPushButton(WindowEssenspl);
        cmdHauptmenu->setObjectName(QString::fromUtf8("cmdHauptmenu"));
        cmdHauptmenu->setGeometry(QRect(160, 240, 80, 22));
        widget = new QWidget(WindowEssenspl);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 50, 221, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cmdRzptEntdecken = new QPushButton(widget);
        cmdRzptEntdecken->setObjectName(QString::fromUtf8("cmdRzptEntdecken"));

        verticalLayout->addWidget(cmdRzptEntdecken);

        cmdPlanung = new QPushButton(widget);
        cmdPlanung->setObjectName(QString::fromUtf8("cmdPlanung"));

        verticalLayout->addWidget(cmdPlanung);

        cmdInspiration = new QPushButton(widget);
        cmdInspiration->setObjectName(QString::fromUtf8("cmdInspiration"));

        verticalLayout->addWidget(cmdInspiration);


        retranslateUi(WindowEssenspl);

        QMetaObject::connectSlotsByName(WindowEssenspl);
    } // setupUi

    void retranslateUi(QDialog *WindowEssenspl)
    {
        WindowEssenspl->setWindowTitle(QApplication::translate("WindowEssenspl", "Dialog", nullptr));
        cmdHauptmenu->setText(QApplication::translate("WindowEssenspl", "Hauptmen\303\274", nullptr));
        cmdRzptEntdecken->setText(QApplication::translate("WindowEssenspl", "Rezepte entdecken", nullptr));
        cmdPlanung->setText(QApplication::translate("WindowEssenspl", "Planung festlegen", nullptr));
        cmdInspiration->setText(QApplication::translate("WindowEssenspl", "Inspiration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowEssenspl: public Ui_WindowEssenspl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWESSENSPL_H
