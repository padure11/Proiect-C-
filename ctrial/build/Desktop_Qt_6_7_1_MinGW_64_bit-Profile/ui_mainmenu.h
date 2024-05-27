/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *goToLeaderBoard;
    QPushButton *goToQuit;
    QPushButton *goToPlay;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(800, 600);
        stackedWidget = new QStackedWidget(MainMenu);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-1, -1, 801, 601));
        page = new QWidget();
        page->setObjectName("page");
        goToLeaderBoard = new QPushButton(page);
        goToLeaderBoard->setObjectName("goToLeaderBoard");
        goToLeaderBoard->setGeometry(QRect(310, 260, 151, 41));
        goToQuit = new QPushButton(page);
        goToQuit->setObjectName("goToQuit");
        goToQuit->setGeometry(QRect(310, 320, 151, 41));
        goToPlay = new QPushButton(page);
        goToPlay->setObjectName("goToPlay");
        goToPlay->setGeometry(QRect(310, 200, 151, 41));
        stackedWidget->addWidget(page);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainMenu", nullptr));
        goToLeaderBoard->setText(QCoreApplication::translate("MainMenu", "LEADERBOARD", nullptr));
        goToQuit->setText(QCoreApplication::translate("MainMenu", "QUIT", nullptr));
        goToPlay->setText(QCoreApplication::translate("MainMenu", "PLAY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
