#include "leaderboardmenu.h"
#include "ui_leaderboardmenu.h"

LeaderboardMenu::LeaderboardMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LeaderboardMenu)
{
    ui->setupUi(this);
}

void LeaderboardMenu::readtabela()
{
    QString filePath = "C:\\FACULTATE\\AN I\\SEM II\\P2\\Proiect-C-\\ctrial\\build\\Desktop_Qt_6_7_1_MinGW_64_bit-Debug\\tabela_scor.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "File Error", "Could not open the file for reading");
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');
        if (parts.size() == 2) {
            QString name = parts[0].trimmed();
            int score = parts[1].trimmed().toInt();
            tabela.insert(name, score);
        }
    }

    file.close();
}


LeaderboardMenu::~LeaderboardMenu()
{
    delete ui;
}

void LeaderboardMenu::paintEvent(QPaintEvent *event)
{

    readtabela();
    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawLine(230, 300, 480, 300);
    painter.setFont(QFont("Times", 20));

    for (auto it = tabela.begin(); it != tabela.end(); ++it) {
        QString name = it.key();
        int score = it.value();
        QString text = QString("%1      %2").arg(name).arg(score);

        painter.drawText(300, 150, text);

    }
}



void LeaderboardMenu::on_gobacktomainmenu_clicked()
{
    emit MainClicked();
}

