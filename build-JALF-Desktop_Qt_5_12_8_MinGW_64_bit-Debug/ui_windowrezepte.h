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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRezepte
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *cmdBack;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page_2;

    void setupUi(QWidget *WindowRezepte)
    {
        if (WindowRezepte->objectName().isEmpty())
            WindowRezepte->setObjectName(QString::fromUtf8("WindowRezepte"));
        WindowRezepte->resize(800, 480);
        stackedWidget = new QStackedWidget(WindowRezepte);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 480));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        cmdBack = new QPushButton(page);
        cmdBack->setObjectName(QString::fromUtf8("cmdBack"));
        cmdBack->setGeometry(QRect(50, 421, 181, 31));
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 130, 361, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(WindowRezepte);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WindowRezepte);
    } // setupUi

    void retranslateUi(QWidget *WindowRezepte)
    {
        WindowRezepte->setWindowTitle(QApplication::translate("WindowRezepte", "Form", nullptr));
        cmdBack->setText(QApplication::translate("WindowRezepte", "Zur\303\274ck", nullptr));
        pushButton->setText(QApplication::translate("WindowRezepte", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("WindowRezepte", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("WindowRezepte", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowRezepte: public Ui_WindowRezepte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWREZEPTE_H
