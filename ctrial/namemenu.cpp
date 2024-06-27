#include "namemenu.h"
#include "ui_namemenu.h"

NameMenu::NameMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NameMenu)
{
    ui->setupUi(this);
}

void NameMenu::writename(QString name)
{
    QString filePath = "C:\\FACULTATE\\AN I\\SEM II\\P2\\Proiect-C-\\ctrial\\build\\Desktop_Qt_6_7_1_MinGW_64_bit-Debug\\tabela_scor.txt";

    QFile file(filePath);
    if (file.open(QIODevice::Append | QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << name << ',';
    } else {
        QMessageBox::warning(this, "File Error", "Could not open tabela_scor.txt");
    }
    file.close();

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
        ui->nameinput->clear();
        writename(name);
        emit StartClicked();
    }
    else {
        QMessageBox::warning(this, "NU AI INTRODUS NUMELE", "NU POTI SA INCEPI DACA NU INTRODUCI NUMELE");
    }
}

