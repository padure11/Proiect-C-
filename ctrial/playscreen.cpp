#include "playscreen.h"
#include "ui_playscreen.h"

PlayScreen::PlayScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlayScreen)
    , isbasedrawen(false)
    , isheaddrawen(false)
    , isbodydrawen(false)
    , isleftarmdrawen(false)
    , isrightarmdrawen(false)
    , isleftlegdrawen(false)
    , isrightlegdrawen(false)
{
    ui->setupUi(this);

    connect(this, &PlayScreen::DrawBaseClicked, this, &PlayScreen::drawBase);
    connect(this, &PlayScreen::DrawHeadClicked, this, &PlayScreen::drawHead);
    connect(this, &PlayScreen::DrawBodyClicked, this, &PlayScreen::drawBody);
    connect(this, &PlayScreen::DrawRightArm, this, &PlayScreen::drawRightArm);
    connect(this, &PlayScreen::DrawLeftArm, this, &PlayScreen::drawLeftArm);
    connect(this, &PlayScreen::DrawRightLeg, this, &PlayScreen::drawRightLeg);
    connect(this, &PlayScreen::DrawLeftLeg, this, &PlayScreen::drawLeftLeg);
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
        painter.drawLine(150, 240, 180, 200);
        painter.drawLine(150, 200, 250, 200);
        painter.drawLine(250, 200, 250, 225);
    }

    if (isheaddrawen) {
        QPainter painter(this);
         painter.drawEllipse(238, 225, 25,25);
    }

    if (isbodydrawen) {
        QPainter painter(this);
        painter.drawLine(250, 250, 250, 325);
    }

    if (isrightarmdrawen) {
        QPainter painter(this);
        painter.drawLine(250, 260, 215, 280);
    }

    if (isleftarmdrawen) {
        QPainter painter(this);
        painter.drawLine(250, 260, 285, 280);
    }

    if (isrightlegdrawen) {
        QPainter painter(this);
        painter.drawLine(250, 325, 215, 350);
    }

    if (isleftlegdrawen) {
        QPainter painter(this);
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
    emit MainClicked();
}


void PlayScreen::on_drawbase_clicked()
{
    emit DrawBaseClicked();
}


void PlayScreen::on_drawhead_clicked()
{
    emit DrawHeadClicked();
}


void PlayScreen::on_drawbody_clicked()
{
    emit DrawBodyClicked();
}


void PlayScreen::on_drawrightarm_clicked()
{
    emit DrawRightArm();
}


void PlayScreen::on_drawleftarm_clicked()
{
    emit DrawLeftArm();
}


void PlayScreen::on_drawrightleg_clicked()
{
    emit DrawRightLeg();
}


void PlayScreen::on_drawleftleg_clicked()
{
    emit DrawLeftLeg();
}

