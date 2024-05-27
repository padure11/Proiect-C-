#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    ui->stackedWidget->addWidget(&name_menu_screen);
    ui->stackedWidget->addWidget(&leaderboard_menu_screen);
    ui->stackedWidget->addWidget(&play_screen);

    connect(&name_menu_screen, SIGNAL(MainClicked()), this, SLOT(MoveToMain()));
    connect(&leaderboard_menu_screen, SIGNAL(MainClicked()), this, SLOT(MoveToMain()));
    connect(&play_screen, SIGNAL(MainClicked()), this, SLOT(MoveToMain()));
    connect(&name_menu_screen, SIGNAL(StartClicked()), this, SLOT(MoveToStart()));
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_goToPlay_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainMenu::on_goToLeaderBoard_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainMenu::on_goToQuit_clicked()
{
    this->close();
}

void MainMenu::MoveToMain()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainMenu::MoveToStart()
{
    ui->stackedWidget->setCurrentIndex(3);
}

