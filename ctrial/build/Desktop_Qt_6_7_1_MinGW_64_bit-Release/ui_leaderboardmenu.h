/********************************************************************************
** Form generated from reading UI file 'leaderboardmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARDMENU_H
#define UI_LEADERBOARDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeaderboardMenu
{
public:
    QLabel *label;
    QPushButton *gobacktomainmenu;

    void setupUi(QWidget *LeaderboardMenu)
    {
        if (LeaderboardMenu->objectName().isEmpty())
            LeaderboardMenu->setObjectName("LeaderboardMenu");
        LeaderboardMenu->resize(800, 600);
        label = new QLabel(LeaderboardMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 140, 291, 101));
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"Segoe UI\";"));
        gobacktomainmenu = new QPushButton(LeaderboardMenu);
        gobacktomainmenu->setObjectName("gobacktomainmenu");
        gobacktomainmenu->setGeometry(QRect(710, 560, 83, 29));

        retranslateUi(LeaderboardMenu);

        QMetaObject::connectSlotsByName(LeaderboardMenu);
    } // setupUi

    void retranslateUi(QWidget *LeaderboardMenu)
    {
        LeaderboardMenu->setWindowTitle(QCoreApplication::translate("LeaderboardMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("LeaderboardMenu", "LEADERBOARD", nullptr));
        gobacktomainmenu->setText(QCoreApplication::translate("LeaderboardMenu", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaderboardMenu: public Ui_LeaderboardMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARDMENU_H
