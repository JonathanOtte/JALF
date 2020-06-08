/********************************************************************************
** Form generated from reading UI file 'windowrezepte.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWREZEPTE_H
#define UI_WINDOWREZEPTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WindowRezepte
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *WindowRezepte)
    {
        if (WindowRezepte->objectName().isEmpty())
            WindowRezepte->setObjectName(QString::fromUtf8("WindowRezepte"));
        WindowRezepte->resize(406, 271);
        pushButton = new QPushButton(WindowRezepte);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 50, 80, 22));
        pushButton_2 = new QPushButton(WindowRezepte);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 100, 80, 22));
        pushButton_3 = new QPushButton(WindowRezepte);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 150, 80, 22));

        retranslateUi(WindowRezepte);

        QMetaObject::connectSlotsByName(WindowRezepte);
    } // setupUi

    void retranslateUi(QDialog *WindowRezepte)
    {
        WindowRezepte->setWindowTitle(QApplication::translate("WindowRezepte", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("WindowRezepte", "Rezepte entdecken", nullptr));
        pushButton_2->setText(QApplication::translate("WindowRezepte", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("WindowRezepte", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowRezepte: public Ui_WindowRezepte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWREZEPTE_H
