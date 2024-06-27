#ifndef LEADERBOARDMENU_H
#define LEADERBOARDMENU_H

#include <QWidget>
#include <QPainter>
#include <QEvent>
#include <QFile>
#include <QTextStream>
#include <vector>
#include <QDebug>
#include <QMessageBox>
#include <QMap>

namespace Ui {
class LeaderboardMenu;
}

class LeaderboardMenu : public QWidget
{
    Q_OBJECT

public:
    explicit LeaderboardMenu(QWidget *parent = nullptr);
    void readtabela();
    ~LeaderboardMenu();

private:
    Ui::LeaderboardMenu *ui;
    QMap<QString, int> tabela;

protected:
    void paintEvent(QPaintEvent *event);

signals:
    void MainClicked();

private slots:
    void on_gobacktomainmenu_clicked();
};

#endif // LEADERBOARDMENU_H
