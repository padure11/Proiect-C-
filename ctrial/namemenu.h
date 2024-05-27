#ifndef NAMEMENU_H
#define NAMEMENU_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class NameMenu;
}

class NameMenu : public QWidget
{
    Q_OBJECT

public:
    explicit NameMenu(QWidget *parent = nullptr);
    ~NameMenu();

private:
    Ui::NameMenu *ui;


signals:
    void MainClicked();
    void StartClicked();

private slots:
    void on_gobacktomainmenu_clicked();
    void on_pushButton_clicked();
};

#endif // NAMEMENU_H
