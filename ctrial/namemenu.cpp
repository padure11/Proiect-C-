#include "namemenu.h"
#include "ui_namemenu.h"

NameMenu::NameMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NameMenu)
{
    ui->setupUi(this);
}

NameMenu::~NameMenu()
{
    delete ui;
}

void NameMenu::on_gobacktomainmenu_clicked()
{
    emit MainClicked();
}


void NameMenu::on_pushButton_clicked()
{
    QString name = ui->nameinput->text();
    if (name.size() > 0) {
        emit StartClicked();
    }
    else {
        QMessageBox::warning(this, "NU AI INTRODUS NUMELE", "NU POTI SA INCEPI DACA NU INTRODUCI NUMELE");
    }
}

