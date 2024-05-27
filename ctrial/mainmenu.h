#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include "namemenu.h"
#include "leaderboardmenu.h"
#include "playscreen.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainMenu;
}
QT_END_NAMESPACE

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_goToPlay_clicked();

    void on_goToLeaderBoard_clicked();

    void on_goToQuit_clicked();

    void MoveToMain();

    void MoveToStart();

private:
    Ui::MainMenu *ui;
    NameMenu name_menu_screen;
    LeaderboardMenu leaderboard_menu_screen;
    PlayScreen play_screen;
};
#endif // MAINMENU_H
