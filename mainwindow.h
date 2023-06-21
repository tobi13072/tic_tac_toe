#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_guzik_kolko_clicked(bool checked);

    void on_guzik_krzyzyk_clicked(bool checked);

    void on_guzik_start_clicked();

    void on_guzik_clicked();

    void check(bool &wygrana);

    void bot();

    void on_guzik_2_clicked();

    void on_guzik_3_clicked();

    void on_guzik_4_clicked();

    void on_guzik_5_clicked();

    void on_guzik_6_clicked();

    void on_guzik_7_clicked();

    void on_guzik_8_clicked();

    void on_guzik_9_clicked();

    void koniec();

    void on_restart_clicked();

    void on_doilu_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QString czym_gramy = "";
    bool check1;
    int max_pkt;

};
#endif // MAINWINDOW_H
