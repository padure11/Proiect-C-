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

void LeaderboardMenu::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // asta e pentru padure scrisa de padure
    // mod de abordare:
    // citesc din fisier numele, scorul si le dau drawText cum vreau eu
    // partea grea: vezi dracu cum citesti dintr-un fisier
    // sa faci si o functie de scriere in fisier
}

void LeaderboardMenu::on_gobacktomainmenu_clicked()
{
    emit MainClicked();
}

