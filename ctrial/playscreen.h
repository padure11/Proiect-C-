#ifndef PLAYSCREEN_H
#define PLAYSCREEN_H

#include <QWidget>
#include <QPainter>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QCoreApplication>
#include "jucator.h"

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
    bool isbasedrawen = false; // variabila pentru a stii daca baza spanzutaoarei este desenata
    bool isheaddrawen = false; // variabila pentru a stii daca capul este desenat
    bool isbodydrawen = false; // variabila pentru a stii daca corpul este desenat
    bool isleftarmdrawen = false; // variabila pentru a stii daca mana dreapta este desenat
    bool isrightarmdrawen = false; // variabila pentru a stii daca mana stanga este desenat
    bool isleftlegdrawen = false; // variabila pentru a stii daca piciorul drept este desenat
    bool isrightlegdrawen = false; // variabila pentru a stii daca piciorul stang este desenat
    bool issetupworddrawen = false;
    bool iswordupdate = false;
    QString cuvant;
    std::vector<QString>literefolosite;
    std::vector<QString>literebune;
    Jucator a;
    std::vector<QString> alfabet;
    std::vector<QString> w;
    int dim;


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
    void remakePlayScreen();
    void remakePlayScreenn();
    void writescore();
    QString generateword();
    void generateList();
    void deleteword(int);
    int checkWin();
};

#endif // PLAYSCREEN_H
