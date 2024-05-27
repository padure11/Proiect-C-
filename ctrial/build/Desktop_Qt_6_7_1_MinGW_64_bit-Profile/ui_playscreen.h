/********************************************************************************
** Form generated from reading UI file 'playscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYSCREEN_H
#define UI_PLAYSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayScreen
{
public:
    QPushButton *gotomain;
    QPushButton *drawbase;
    QPushButton *drawhead;
    QPushButton *drawbody;

    void setupUi(QWidget *PlayScreen)
    {
        if (PlayScreen->objectName().isEmpty())
            PlayScreen->setObjectName("PlayScreen");
        PlayScreen->resize(800, 600);
        gotomain = new QPushButton(PlayScreen);
        gotomain->setObjectName("gotomain");
        gotomain->setGeometry(QRect(682, 560, 111, 29));
        drawbase = new QPushButton(PlayScreen);
        drawbase->setObjectName("drawbase");
        drawbase->setGeometry(QRect(570, 80, 83, 29));
        drawhead = new QPushButton(PlayScreen);
        drawhead->setObjectName("drawhead");
        drawhead->setGeometry(QRect(570, 130, 83, 29));
        drawbody = new QPushButton(PlayScreen);
        drawbody->setObjectName("drawbody");
        drawbody->setGeometry(QRect(570, 180, 83, 29));

        retranslateUi(PlayScreen);

        QMetaObject::connectSlotsByName(PlayScreen);
    } // setupUi

    void retranslateUi(QWidget *PlayScreen)
    {
        PlayScreen->setWindowTitle(QCoreApplication::translate("PlayScreen", "Form", nullptr));
        gotomain->setText(QCoreApplication::translate("PlayScreen", "BACK TO MAIN", nullptr));
        drawbase->setText(QCoreApplication::translate("PlayScreen", "BASE", nullptr));
        drawhead->setText(QCoreApplication::translate("PlayScreen", "HEAD", nullptr));
        drawbody->setText(QCoreApplication::translate("PlayScreen", "BODY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayScreen: public Ui_PlayScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYSCREEN_H
