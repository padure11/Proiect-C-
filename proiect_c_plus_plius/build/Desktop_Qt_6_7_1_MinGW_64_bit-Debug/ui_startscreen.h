/********************************************************************************
** Form generated from reading UI file 'startscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartScreen
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *MainMenu;
    QPushButton *toplay;
    QPushButton *toleaderboard;
    QPushButton *toquit;
    QWidget *EnterName;
    QLineEdit *name_input;
    QLabel *name_label;
    QPushButton *goback_2;
    QPushButton *gostart;
    QWidget *PlayScreen;
    QLabel *label_3;
    QPushButton *goback_3;
    QWidget *LeaderBoard;
    QLabel *label;
    QPushButton *goback;

    void setupUi(QMainWindow *StartScreen)
    {
        if (StartScreen->objectName().isEmpty())
            StartScreen->setObjectName("StartScreen");
        StartScreen->resize(636, 468);
        centralwidget = new QWidget(StartScreen);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-1, -1, 641, 471));
        MainMenu = new QWidget();
        MainMenu->setObjectName("MainMenu");
        toplay = new QPushButton(MainMenu);
        toplay->setObjectName("toplay");
        toplay->setGeometry(QRect(260, 130, 131, 31));
        toleaderboard = new QPushButton(MainMenu);
        toleaderboard->setObjectName("toleaderboard");
        toleaderboard->setGeometry(QRect(260, 180, 131, 31));
        toquit = new QPushButton(MainMenu);
        toquit->setObjectName("toquit");
        toquit->setGeometry(QRect(260, 230, 131, 31));
        stackedWidget->addWidget(MainMenu);
        EnterName = new QWidget();
        EnterName->setObjectName("EnterName");
        name_input = new QLineEdit(EnterName);
        name_input->setObjectName("name_input");
        name_input->setGeometry(QRect(200, 80, 113, 28));
        name_label = new QLabel(EnterName);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(60, 80, 141, 20));
        goback_2 = new QPushButton(EnterName);
        goback_2->setObjectName("goback_2");
        goback_2->setGeometry(QRect(540, 430, 83, 29));
        gostart = new QPushButton(EnterName);
        gostart->setObjectName("gostart");
        gostart->setGeometry(QRect(210, 130, 83, 29));
        stackedWidget->addWidget(EnterName);
        PlayScreen = new QWidget();
        PlayScreen->setObjectName("PlayScreen");
        label_3 = new QLabel(PlayScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 140, 581, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";"));
        goback_3 = new QPushButton(PlayScreen);
        goback_3->setObjectName("goback_3");
        goback_3->setGeometry(QRect(540, 420, 83, 29));
        stackedWidget->addWidget(PlayScreen);
        LeaderBoard = new QWidget();
        LeaderBoard->setObjectName("LeaderBoard");
        label = new QLabel(LeaderBoard);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 80, 231, 71));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));
        goback = new QPushButton(LeaderBoard);
        goback->setObjectName("goback");
        goback->setGeometry(QRect(540, 430, 91, 29));
        stackedWidget->addWidget(LeaderBoard);
        StartScreen->setCentralWidget(centralwidget);

        retranslateUi(StartScreen);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(StartScreen);
    } // setupUi

    void retranslateUi(QMainWindow *StartScreen)
    {
        StartScreen->setWindowTitle(QCoreApplication::translate("StartScreen", "StartScreen", nullptr));
        toplay->setText(QCoreApplication::translate("StartScreen", "PLAY", nullptr));
        toleaderboard->setText(QCoreApplication::translate("StartScreen", "LEADERBOARD", nullptr));
        toquit->setText(QCoreApplication::translate("StartScreen", "QUIT", nullptr));
        name_label->setText(QCoreApplication::translate("StartScreen", "ENTER YOUR NAME", nullptr));
        goback_2->setText(QCoreApplication::translate("StartScreen", "BACK", nullptr));
        gostart->setText(QCoreApplication::translate("StartScreen", "START", nullptr));
        label_3->setText(QCoreApplication::translate("StartScreen", "HAI LA JOACA PUIULE", nullptr));
        goback_3->setText(QCoreApplication::translate("StartScreen", "BACK", nullptr));
        label->setText(QCoreApplication::translate("StartScreen", "LEADERBOARD", nullptr));
        goback->setText(QCoreApplication::translate("StartScreen", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartScreen: public Ui_StartScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
