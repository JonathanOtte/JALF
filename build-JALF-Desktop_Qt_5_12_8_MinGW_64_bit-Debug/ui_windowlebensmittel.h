/********************************************************************************
** Form generated from reading UI file 'windowlebensmittel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLEBENSMITTEL_H
#define UI_WINDOWLEBENSMITTEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowLebensmittel
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *cmdBack;
    QWidget *page_2;

    void setupUi(QWidget *WindowLebensmittel)
    {
        if (WindowLebensmittel->objectName().isEmpty())
            WindowLebensmittel->setObjectName(QString::fromUtf8("WindowLebensmittel"));
        WindowLebensmittel->resize(800, 480);
        stackedWidget = new QStackedWidget(WindowLebensmittel);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 480));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        cmdBack = new QPushButton(page);
        cmdBack->setObjectName(QString::fromUtf8("cmdBack"));
        cmdBack->setGeometry(QRect(50, 421, 181, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(WindowLebensmittel);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WindowLebensmittel);
    } // setupUi

    void retranslateUi(QWidget *WindowLebensmittel)
    {
        WindowLebensmittel->setWindowTitle(QApplication::translate("WindowLebensmittel", "Form", nullptr));
        cmdBack->setText(QApplication::translate("WindowLebensmittel", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowLebensmittel: public Ui_WindowLebensmittel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLEBENSMITTEL_H
