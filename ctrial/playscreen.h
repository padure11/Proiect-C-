#ifndef PLAYSCREEN_H
#define PLAYSCREEN_H

#include <QWidget>
#include <QPainter>
#include <QMessageBox>
#include <QDebug>

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
    bool isbasedrawen = false; // variabila pentru a stii daca baza spanzutaoarei este desenat
    bool isheaddrawen = false; // variabila pentru a stii daca capul este desenat
    bool isbodydrawen = false; // variabila pentru a stii daca corpul este desenat
    bool isleftarmdrawen = false; // variabila pentru a stii daca mana dreapta este desenat
    bool isrightarmdrawen = false; // variabila pentru a stii daca mana stanga este desenat
    bool isleftlegdrawen = false; // variabila pentru a stii daca piciorul drept este desenat
    bool isrightlegdrawen = false; // variabila pentru a stii daca piciorul stang este desenat
    bool issetupworddrawen = false;
    bool iswordupdate = false;
    QString cuvant = "ENCICLOPEDIA";
    std::vector<QString>literefolosite;
    std::vector<QString>literebune;



protected:
    void paintEvent(QPaintEvent *event); // acesta este event handler-ul pentru a desenat diferitele parti

signals: // semnale emise de butoane pentru a stii ce s-a intamplat
    void MainClicked();

private slots: // functii
    void drawBase();
    void drawHead();
    void drawBody();
    void drawLeftArm();
    void drawRightArm();
    void drawLeftLeg();
    void drawRightLeg();
    void on_gotomain_clicked();
    void letter_handler();
    void redrawWord();
    void on_confirmlitera_clicked();
    int checkWin();
};

#endif // PLAYSCREEN_H
