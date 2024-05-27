#include "leaderboardmenu.h"
#include "ui_leaderboardmenu.h"

LeaderboardMenu::LeaderboardMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LeaderboardMenu)
{
    ui->setupUi(this);
}

LeaderboardMenu::~LeaderboardMenu()
{
    delete ui;
}

void LeaderboardMenu::on_gobacktomainmenu_clicked()
{
    emit MainClicked();
}

