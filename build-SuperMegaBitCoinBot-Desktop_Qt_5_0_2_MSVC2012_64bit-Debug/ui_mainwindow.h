/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *startEarningButton;
    QLineEdit *apiKeyEdit;
    QLineEdit *secretKeyEdit;
    QWidget *statsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        startEarningButton = new QPushButton(centralWidget);
        startEarningButton->setObjectName(QStringLiteral("startEarningButton"));
        startEarningButton->setGeometry(QRect(110, 80, 191, 32));
        apiKeyEdit = new QLineEdit(centralWidget);
        apiKeyEdit->setObjectName(QStringLiteral("apiKeyEdit"));
        apiKeyEdit->setGeometry(QRect(20, 20, 361, 21));
        secretKeyEdit = new QLineEdit(centralWidget);
        secretKeyEdit->setObjectName(QStringLiteral("secretKeyEdit"));
        secretKeyEdit->setGeometry(QRect(20, 50, 361, 21));
        statsView = new QWidget(centralWidget);
        statsView->setObjectName(QStringLiteral("statsView"));
        statsView->setGeometry(QRect(20, 120, 361, 151));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SuperMegaBitCoinBot", 0));
        startEarningButton->setText(QApplication::translate("MainWindow", "Start earning money!", 0));
        apiKeyEdit->setPlaceholderText(QApplication::translate("MainWindow", "Your API key", 0));
        secretKeyEdit->setText(QString());
        secretKeyEdit->setPlaceholderText(QApplication::translate("MainWindow", "Your secret key", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
