#include "startscreen.h"
#include "ui_startscreen.h"

StartScreen::StartScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartScreen)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
}

StartScreen::~StartScreen()
{
    delete ui;
}

void StartScreen::on_toleaderboard_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void StartScreen::on_goback_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void StartScreen::on_toquit_clicked()
{
    close();
}


void StartScreen::on_goback_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void StartScreen::on_toplay_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void StartScreen::on_gostart_clicked()
{
    QString name = ui->name_input->text();

    if (name.size() > 0) {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else {
        QMessageBox::warning(this,"NU A MERS", "NU POTI FARA NUME");
    }

}


void StartScreen::on_goback_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

