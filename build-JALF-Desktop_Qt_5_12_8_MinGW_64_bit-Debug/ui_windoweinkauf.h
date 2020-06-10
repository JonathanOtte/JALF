/********************************************************************************
** Form generated from reading UI file 'windoweinkauf.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWEINKAUF_H
#define UI_WINDOWEINKAUF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowEinkauf
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *cmdBack;
    QWidget *page_2;

    void setupUi(QWidget *WindowEinkauf)
    {
        if (WindowEinkauf->objectName().isEmpty())
            WindowEinkauf->setObjectName(QString::fromUtf8("WindowEinkauf"));
        WindowEinkauf->resize(800, 480);
        stackedWidget = new QStackedWidget(WindowEinkauf);
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

        retranslateUi(WindowEinkauf);

        QMetaObject::connectSlotsByName(WindowEinkauf);
    } // setupUi

    void retranslateUi(QWidget *WindowEinkauf)
    {
        WindowEinkauf->setWindowTitle(QApplication::translate("WindowEinkauf", "Form", nullptr));
        cmdBack->setText(QApplication::translate("WindowEinkauf", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowEinkauf: public Ui_WindowEinkauf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEINKAUF_H
