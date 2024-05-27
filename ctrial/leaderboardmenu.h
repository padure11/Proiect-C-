#ifndef LEADERBOARDMENU_H
#define LEADERBOARDMENU_H

#include <QWidget>
#include <QPainter>
#include <QEvent>
#include <QFile>
#include <QTextStream>

namespace Ui {
class LeaderboardMenu;
}

class LeaderboardMenu : public QWidget
{
    Q_OBJECT

public:
    explicit LeaderboardMenu(QWidget *parent = nullptr);
    ~LeaderboardMenu();

private:
    Ui::LeaderboardMenu *ui;

protected:
    void paintEvent(QPaintEvent *event);

signals:
    void MainClicked();

private slots:
    void on_gobacktomainmenu_clicked();
};

#endif // LEADERBOARDMENU_H
