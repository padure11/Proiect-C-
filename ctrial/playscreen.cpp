#include "playscreen.h"
#include "ui_playscreen.h"

PlayScreen::PlayScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlayScreen)
    , isbasedrawen(true)
    , isheaddrawen(false)
    , isbodydrawen(false)
    , isleftarmdrawen(false)
    , isrightarmdrawen(false)
    , isleftlegdrawen(false)
    , isrightlegdrawen(false)
{
    ui->setupUi(this);

}

PlayScreen::~PlayScreen()
{
    delete ui;
}

void PlayScreen::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    if (isbasedrawen) {
        QPainter painter(this);
        painter.drawLine(75, 400, 225, 400);
        painter.drawLine(150, 400, 150, 200);
        painter.drawLine(150, 200, 250, 200);
        painter.drawLine(250, 200, 250, 225);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.drawLine(150, 240, 180, 200);
    }

    if (isheaddrawen) {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.drawEllipse(238, 225, 25,25);
    }

    if (isbodydrawen) {
        QPainter painter(this);
        painter.drawLine(250, 250, 250, 325);
    }

    if (isrightarmdrawen) {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.drawLine(250, 260, 215, 280);
    }

    if (isleftarmdrawen) {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.drawLine(250, 260, 285, 280);
    }

    if (isrightlegdrawen) {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.drawLine(250, 325, 215, 350);
    }

    if (isleftlegdrawen) {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.drawLine(250, 325, 285, 350);
    }


}

void PlayScreen::drawBase()
{
    isbasedrawen = true;
    update();
}

void PlayScreen::drawHead()
{
    isheaddrawen = true;
        update();
}

void PlayScreen::drawBody()
{
    isbodydrawen = true;
    update();
}

void PlayScreen::drawLeftArm()
{
    isleftarmdrawen = true;
    update();
}

void PlayScreen::drawRightArm()
{
    isrightarmdrawen = true;
    update();
}

void PlayScreen::drawLeftLeg()
{
    isleftlegdrawen = true;
    update();
}

void PlayScreen::drawRightLeg()
{

    isrightlegdrawen = true;
    update();
}



void PlayScreen::on_gotomain_clicked()
{
    isbodydrawen = false;
    isheaddrawen = false;
    isrightarmdrawen = false;
    isleftarmdrawen = false;
    isrightlegdrawen = false;
    isleftlegdrawen = false;
    literefolosite.clear();
    literebune.clear();
    emit MainClicked();
}


void PlayScreen::letter_handler() {
    QString litera = ui->literainput->text();
    QString cuvant = "cuvant";

    if (litera.size() == 1 && count(literefolosite.begin(), literefolosite.end(), litera) == 0) {
        if (cuvant.contains(litera)) {

            if (count(literebune.begin(), literebune.end(), litera) == 0) {
                literebune.push_back(litera);
                QMessageBox::warning(this, "BRAVO", "ESTI TARE SEFULE");
            }

            if (int(literebune.size()) == int(cuvant.size())) {
                QMessageBox::warning(this, "ESTI INCREDIBIL", "BRAVO TATA");
            }
        }
        else {

            literefolosite.push_back(litera);
            if (isheaddrawen == false) {
                drawHead();
            }
            else if (isbodydrawen == false) {
                drawBody();
            }
            else if (isbodydrawen == false) {
                drawBody();
            }
            else if (isrightarmdrawen == false) {
                drawRightArm();
            }
            else if (isleftarmdrawen == false) {
                drawLeftArm();
            }
            else if (isrightlegdrawen == false) {
                drawRightLeg();
            }
            else if (isleftlegdrawen == false) {
                drawLeftLeg();
                QMessageBox::warning(this,"AI PIERDUT", "NT BRO, NEXT TIME MAYBE");
            }
        }
    }
    else {
        QMessageBox::warning(this, "NO SE PUEDE", "NU POTI SA REINTRODUCI O LITERA DEJA FOLOSITA");
    }
}

void PlayScreen::draw_literefolosite()
{

}

void PlayScreen::draw_literebune()
{

}

void PlayScreen::on_confirmlitera_clicked()
{
    letter_handler();
}

