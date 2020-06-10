/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *cmdClose;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdLebensm;
    QPushButton *cmdRezepte;
    QPushButton *cmdEinkauf;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 480));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        cmdClose = new QPushButton(page);
        cmdClose->setObjectName(QString::fromUtf8("cmdClose"));
        cmdClose->setGeometry(QRect(339, 421, 121, 21));
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(219, 80, 361, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cmdLebensm = new QPushButton(widget);
        cmdLebensm->setObjectName(QString::fromUtf8("cmdLebensm"));

        verticalLayout->addWidget(cmdLebensm);

        cmdRezepte = new QPushButton(widget);
        cmdRezepte->setObjectName(QString::fromUtf8("cmdRezepte"));

        verticalLayout->addWidget(cmdRezepte);

        cmdEinkauf = new QPushButton(widget);
        cmdEinkauf->setObjectName(QString::fromUtf8("cmdEinkauf"));

        verticalLayout->addWidget(cmdEinkauf);

        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        cmdClose->setText(QApplication::translate("MainWindow", "Beenden", nullptr));
        cmdLebensm->setText(QApplication::translate("MainWindow", "Lebensmittel", nullptr));
        cmdRezepte->setText(QApplication::translate("MainWindow", "Rezepte", nullptr));
        cmdEinkauf->setText(QApplication::translate("MainWindow", "Einkauf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
