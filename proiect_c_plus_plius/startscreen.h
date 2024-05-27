#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class StartScreen;
}
QT_END_NAMESPACE

class StartScreen : public QMainWindow
{
    Q_OBJECT

public:
    StartScreen(QWidget *parent = nullptr);
    ~StartScreen();

private slots:
    void on_toleaderboard_clicked();

    void on_goback_clicked();

    void on_toquit_clicked();

    void on_goback_2_clicked();

    void on_toplay_clicked();

    void on_gostart_clicked();

    void on_goback_3_clicked();

private:
    Ui::StartScreen *ui;
};
#endif // STARTSCREEN_H
