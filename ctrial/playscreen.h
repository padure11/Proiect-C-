#ifndef PLAYSCREEN_H
#define PLAYSCREEN_H

#include <QWidget>
#include <QPainter>

namespace Ui {
class PlayScreen;
}

class PlayScreen : public QWidget
{
    Q_OBJECT

public:
    explicit PlayScreen(QWidget *parent = nullptr);
    ~PlayScreen();

private:
    Ui::PlayScreen *ui;
    bool isbasedrawen = false;
    bool isheaddrawen = false;
    bool isbodydrawen = false;
    bool isleftarmdrawen = false;
    bool isrightarmdrawen = false;
    bool isleftlegdrawen = false;
    bool isrightlegdrawen = false;

protected:
    void paintEvent(QPaintEvent *event);

signals:
    void MainClicked();
    void DrawBaseClicked();
    void DrawHeadClicked();
    void DrawBodyClicked();
    void DrawRightArm();
    void DrawLeftArm();
    void DrawRightLeg();
    void DrawLeftLeg();

private slots:
    void drawBase();
    void drawHead();
    void drawBody();
    void drawLeftArm();
    void drawRightArm();
    void drawLeftLeg();
    void drawRightLeg();
    void on_gotomain_clicked();
    void on_drawbase_clicked();
    void on_drawhead_clicked();
    void on_drawbody_clicked();
    void on_drawrightarm_clicked();
    void on_drawleftarm_clicked();
    void on_drawrightleg_clicked();
    void on_drawleftleg_clicked();
};

#endif // PLAYSCREEN_H
