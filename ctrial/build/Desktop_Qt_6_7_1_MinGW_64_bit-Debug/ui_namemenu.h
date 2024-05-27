/********************************************************************************
** Form generated from reading UI file 'namemenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEMENU_H
#define UI_NAMEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NameMenu
{
public:
    QLineEdit *nameinput;
    QLabel *label;
    QPushButton *gobacktomainmenu;
    QPushButton *pushButton;

    void setupUi(QWidget *NameMenu)
    {
        if (NameMenu->objectName().isEmpty())
            NameMenu->setObjectName("NameMenu");
        NameMenu->resize(800, 600);
        nameinput = new QLineEdit(NameMenu);
        nameinput->setObjectName("nameinput");
        nameinput->setGeometry(QRect(310, 120, 113, 28));
        label = new QLabel(NameMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 120, 101, 20));
        gobacktomainmenu = new QPushButton(NameMenu);
        gobacktomainmenu->setObjectName("gobacktomainmenu");
        gobacktomainmenu->setGeometry(QRect(710, 560, 83, 29));
        pushButton = new QPushButton(NameMenu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 170, 83, 29));

        retranslateUi(NameMenu);

        QMetaObject::connectSlotsByName(NameMenu);
    } // setupUi

    void retranslateUi(QWidget *NameMenu)
    {
        NameMenu->setWindowTitle(QCoreApplication::translate("NameMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("NameMenu", "ENTER NAME:", nullptr));
        gobacktomainmenu->setText(QCoreApplication::translate("NameMenu", "BACK", nullptr));
        pushButton->setText(QCoreApplication::translate("NameMenu", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NameMenu: public Ui_NameMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEMENU_H
