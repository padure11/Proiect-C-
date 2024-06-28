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

    QList<QPair<QString, int>> sortedList;
    for (auto it = tabela.begin(); it != tabela.end(); ++it) {
        sortedList.append(qMakePair(it.key(), it.value()));
    }

    std::sort(sortedList.begin(), sortedList.end(), [](const QPair<QString, int> &a, const QPair<QString, int> &b) {
        return a.second > b.second;
    });

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawLine(230, 100, 480, 100);
    painter.setFont(QFont("Times", 20));

    int y = 125;
    int i=0;
    for (const auto &pair : sortedList) {
        QString text = QString("%1: %2").arg(pair.first).arg(pair.second);
        painter.drawText(250, y, text);
        y += 25;
        if (i!=10) {
            i++;
        }
        else {
            break;
        }
    }
}



void LeaderboardMenu::on_gobacktomainmenu_clicked()
{
    emit MainClicked();
}

