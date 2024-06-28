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
    , issetupworddrawen(true)
    , iswordupdate(false)
    , a("admin")
{
    ui->setupUi(this);
    cuvant = generateword().toUpper();
}

PlayScreen::~PlayScreen()
{
    delete ui;
}

void PlayScreen::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setFont(QFont("Times", 20));
    painter.drawText(650, 50, QString::number(a.scor));
    painter.setFont(QFont("Times", 14));
    if (isbasedrawen) {
        painter.drawLine(75, 400, 225, 400);
        painter.drawLine(150, 400, 150, 200);
        painter.drawLine(150, 200, 250, 200);
        painter.drawLine(250, 200, 250, 225);
        painter.drawLine(150, 240, 180, 200);
    }

    if (isheaddrawen) {
        painter.drawEllipse(238, 225, 25,25);
    }

    if (isbodydrawen) {
        painter.drawLine(250, 250, 250, 325);
    }

    if (isrightarmdrawen) {
        painter.drawLine(250, 260, 215, 280);
    }

    if (isleftarmdrawen) {
        painter.drawLine(250, 260, 285, 280);
    }

    if (isrightlegdrawen) {
        painter.drawLine(250, 325, 215, 350);
    }

    if (isleftlegdrawen) {
        painter.drawLine(250, 325, 285, 350);
    }

    if (issetupworddrawen) {



        int x1 = 350;
        int x2 = 363;
        int y1 = 350;
        int y2 = 350;
        for (int i=0;i<cuvant.size();i++) {
            painter.drawLine(x1, y1, x2, y2);
            x1=x1+15;
            x2=x2+15;
        }

        painter.drawText(350, 345, QString(cuvant[0]));

        for (int i=1;i<cuvant.size()-1;i++) {
            if (cuvant[i] == cuvant[0] || cuvant[i] == cuvant[cuvant.size()-1]) {
                painter.drawText(350 + i*15, 345, cuvant[i]);
            }
        }

        painter.drawText(350 + (cuvant.size()-1)*15, 345, cuvant[cuvant.size()-1]);

    }


    if (iswordupdate) {
        for (int i=0;i<cuvant.size();i++) {
            if (count(literebune.begin(), literebune.end(), cuvant[i]) == 1) {
                painter.drawText(350 + i*15, 345, cuvant[i]);
            }
        }
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


    QString filePath = "C:\\FACULTATE\\AN I\\SEM II\\P2\\Proiect-C-\\ctrial\\build\\Desktop_Qt_6_7_1_MinGW_64_bit-Debug\\tabela_scor.txt";

    QFile file(filePath);
    if (file.open(QIODevice::Append | QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << a.scor << '\n';
    } else {
        QMessageBox::warning(this, "File Error", "Could not open tabela_scor.txt");
    }
    file.close();

    emit MainClicked();
}


void PlayScreen::letter_handler() {
    QString litera = ui->literainput->text();

    litera = litera.toUpper();

    literefolosite.push_back(cuvant[0]);
    literefolosite.push_back(cuvant[cuvant.size()-1]);
    literebune.push_back(cuvant[0]);
    literebune.push_back(cuvant[cuvant.size()-1]);

    if (litera.size() == 1 && count(literefolosite.begin(), literefolosite.end(), litera) == 0) {
        if (cuvant.contains(litera)) {
            a.scor += 10;
            if (count(literefolosite.begin(), literefolosite.end(), litera) == 0) {
                literebune.push_back(litera);
                literefolosite.push_back(litera);
                redrawWord();
            }

            if (checkWin()) {
                QMessageBox::warning(this, "ESTI INCREDIBIL", "+100 LA SCOR");
                remakePlayScreen();
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
                QMessageBox::warning(this,"AI PIERDUT", "NEXT TIME MAYBE\nCUVANTUL ERA:\n" + cuvant);
                writescore();
                remakePlayScreenn();
                emit MainClicked();
            }
        }
    }
    else {
        QMessageBox::warning(this, "NO SE PUEDE", "NU POTI SA REINTRODUCI O LITERA DEJA FOLOSITA");
    }
}

void PlayScreen::redrawWord()
{
    iswordupdate = true;
    update();
}


void PlayScreen::on_confirmlitera_clicked()
{
    letter_handler();
    ui->literainput->clear();
}

void PlayScreen::remakePlayScreen()
{
    isbodydrawen = false;
    isheaddrawen = false;
    isrightarmdrawen = false;
    isleftarmdrawen = false;
    isrightlegdrawen = false;
    isleftlegdrawen = false;
    literefolosite.clear();
    literebune.clear();
    a.scor += 100;
    cuvant = generateword().toUpper();
}

void PlayScreen::remakePlayScreenn()
{
    isbodydrawen = false;
    isheaddrawen = false;
    isrightarmdrawen = false;
    isleftarmdrawen = false;
    isrightlegdrawen = false;
    isleftlegdrawen = false;
    literefolosite.clear();
    literebune.clear();
    a.scor = 0;
    cuvant = generateword().toUpper();
}

void PlayScreen::writescore()
{
    QString filePath = "C:\\FACULTATE\\AN I\\SEM II\\P2\\Proiect-C-\\ctrial\\build\\Desktop_Qt_6_7_1_MinGW_64_bit-Debug\\tabela_scor.txt";

    QFile file(filePath);
    if (file.open(QIODevice::Append | QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << a.scor << '\n';
    } else {
        QMessageBox::warning(this, "File Error", "Could not open tabela_scor.txt");
    }
    file.close();
}

QString PlayScreen::generateword()
{
    if(dim <= 0)
        generateList();

    int randIndex = rand()%100;
    QString guess = w[randIndex];
    deleteword(randIndex);
    return guess;
}

void PlayScreen::generateList()
{
    QString filePath = "C:\\FACULTATE\\AN I\\SEM II\\P2\\Proiect-C-\\ctrial\\build\\Desktop_Qt_6_7_1_MinGW_64_bit-Debug\\words.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "File Error", "Could not open the file for reading");
    }

    QTextStream in(&file);
    dim = 100;
    for(int i = 0 ; i < dim ; i++)
        w.push_back(in.readLine());
    file.close();
}

void PlayScreen::deleteword(int index)
{
    for(int i = index ; i < dim - 1 ; i++)
        w[i] = w[i + 1];
    dim--;
}

int PlayScreen::checkWin()
{
    for (int i=0;i<cuvant.size();i++) {
        if (count(literebune.begin(), literebune.end(), cuvant[i]) == 0) {
            return 0;
        }
    }
    return 1;
}

