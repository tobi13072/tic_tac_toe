#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->restart->hide();
    ui->guzik_start->hide();
    ui->wynik_kolko->hide();
    ui->wynik_krzyzyk->hide();
    ui->licznik_kolko->hide();
    ui->licznik_krzyzyk->hide();
    ui->wynik->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_guzik_kolko_clicked(bool checked)
{
    if(checked)
    {
        czym_gramy = "O";
        ui->guzik_krzyzyk->setChecked(false);
        ui->guzik_start->show();
    }


}

void MainWindow::on_guzik_krzyzyk_clicked(bool checked)
{
    if(checked)
    {
        czym_gramy = "X";
        ui->guzik_kolko->setChecked(false);
        ui->guzik_start->show();
    }

}

void MainWindow::on_guzik_start_clicked()
{

        ui->guzik_kolko->setDisabled(true);
        ui->guzik_krzyzyk->setDisabled(true);
        ui->wynik->show();
        ui->wynik_kolko->show();
        ui->wynik_krzyzyk->show();
        ui->licznik_kolko->show();
        ui->licznik_krzyzyk->show();

        ui->doilu->hide();
        ui->text_doilu->hide();

        ui->guzik_start->hide();

        ui->guzik->setText("");
        ui->guzik_2->setText("");
        ui->guzik_3->setText("");
        ui->guzik_4->setText("");
        ui->guzik_5->setText("");
        ui->guzik_6->setText("");
        ui->guzik_7->setText("");
        ui->guzik_8->setText("");
        ui->guzik_9->setText("");

        check1 = true;

}


void MainWindow::on_guzik_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik->text()=="")
            {
                ui->guzik->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}

void MainWindow::on_guzik_2_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_2->text()=="")
            {
                ui->guzik_2->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}

void MainWindow::on_guzik_3_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_3->text()=="")
            {
                ui->guzik_3->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}



void MainWindow::on_guzik_4_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_4->text()=="")
            {
                ui->guzik_4->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}


void MainWindow::on_guzik_5_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_5->text()=="")
            {
                ui->guzik_5->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}

void MainWindow::on_guzik_6_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_6->text()=="")
            {
                ui->guzik_6->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}



void MainWindow::on_guzik_7_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_7->text()=="")
            {
                ui->guzik_7->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}

void MainWindow::on_guzik_8_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_8->text()=="")
            {
                ui->guzik_8->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}

void MainWindow::on_guzik_9_clicked()
{
    bool wygrana;
    if(check1)
    {
        if(czym_gramy != "")
        {
            if(ui->guzik_9->text()=="")
            {
                ui->guzik_9->setText(czym_gramy);
                check(wygrana);
                if(!wygrana)
                {
                    bot();
                    check(wygrana);
                }
            }
        }
    }
}


void MainWindow::bot()
{

    QString anticzym_gramy;
    if(czym_gramy=="X") anticzym_gramy ="O";
    else anticzym_gramy="X";

    int k=0;
    int i=0;
    while (k==0)
    {
        i=rand()%9;
        switch(i)
        {
            case 0: if(ui->guzik->text()==""){
                    ui->guzik->setText(anticzym_gramy);
                    k++;
                }break;
            case 1: if(ui->guzik_2->text()==""){
                    ui->guzik_2->setText(anticzym_gramy);
                    k++;
                }break;
            case 2: if(ui->guzik_3->text()==""){
                    ui->guzik_3->setText(anticzym_gramy);
                    k++;
                }break;
            case 3: if(ui->guzik_4->text()==""){
                    ui->guzik_4->setText(anticzym_gramy);
                    k++;
                }break;
            case 4: if(ui->guzik_5->text()==""){
                    ui->guzik_5->setText(anticzym_gramy);
                    k++;
                }break;
            case 5: if(ui->guzik_6->text()==""){
                    ui->guzik_6->setText(anticzym_gramy);
                    k++;
                }break;
            case 6: if(ui->guzik_7->text()==""){
                    ui->guzik_7->setText(anticzym_gramy);
                    k++;
                }break;
            case 7: if(ui->guzik_8->text()==""){
                    ui->guzik_8->setText(anticzym_gramy);
                    k++;
                }break;
            case 8: if(ui->guzik_9->text()==""){
                    ui->guzik_9->setText(anticzym_gramy);
                    k++;
                }break;
        }
        if(ui->guzik->text()!=""&&ui->guzik_2->text()!=""&&ui->guzik_3->text()!=""&&ui->guzik_4->text()!=""&&ui->guzik_5->text()!=""&&ui->guzik_6->text()!=""&&ui->guzik_7->text()!=""&&ui->guzik_8->text()!=""&&ui->guzik_9->text()!=""){
            break;
        }
    }
}


void MainWindow::check(bool &checker){
    QString winner ="";

    checker = 0;
    if (ui->guzik->text()!=""&&ui->guzik->text()==ui->guzik_2->text()&&ui->guzik->text()==ui->guzik_3->text()){
        winner = ui->guzik->text();
        checker = 1;
    }
    else if (ui->guzik_4->text()!=""&&ui->guzik_4->text()==ui->guzik_5->text()&&ui->guzik_4->text()==ui->guzik_6->text()){
        winner = ui->guzik_4->text();
        checker = 1;
    }
    else if (ui->guzik_7->text()!=""&&ui->guzik_7->text()==ui->guzik_8->text()&&ui->guzik_7->text()==ui->guzik_9->text()){
        winner = ui->guzik_7->text();
        checker = 1;
    }
    else if (ui->guzik->text()!=""&&ui->guzik->text()==ui->guzik_4->text()&&ui->guzik->text()==ui->guzik_7->text()){
        winner = ui->guzik->text();
        checker = 1;
    }
    else if (ui->guzik_2->text()!=""&&ui->guzik_2->text()==ui->guzik_5->text()&&ui->guzik_2->text()==ui->guzik_8->text()){
        winner = ui->guzik_2->text();
        checker = 1;
    }
    else if (ui->guzik_3->text()!=""&&ui->guzik_3->text()==ui->guzik_6->text()&&ui->guzik_3->text()==ui->guzik_9->text()){
        winner = ui->guzik_3->text();
        checker = 1;
    }
    else if (ui->guzik->text()!=""&&ui->guzik->text()==ui->guzik_5->text()&&ui->guzik->text()==ui->guzik_9->text()){
        winner = ui->guzik->text();
        checker = 1;
    }
    else if (ui->guzik_3->text()!=""&&ui->guzik_3->text()==ui->guzik_5->text()&&ui->guzik_3->text()==ui->guzik_7->text()){
        winner = ui->guzik_3->text();
        checker = 1;
    }
    else if(ui->guzik->text()!=""&&ui->guzik_2->text()!=""&&ui->guzik_3->text()!=""&&ui->guzik_4->text()!=""&&ui->guzik_5->text()!=""&&ui->guzik_6->text()!=""&&ui->guzik_7->text()!=""&&ui->guzik_8->text()!=""&&ui->guzik_9->text()!=""){
        winner = "remis";
        checker = 1;
    }

    if(checker)
    {
        QString anticzym_gramy;
        if(czym_gramy=="X") anticzym_gramy ="O";
        else anticzym_gramy="X";

        if(winner == czym_gramy)
        {
            if(czym_gramy=="X") ui->licznik_krzyzyk->display(ui->licznik_krzyzyk->value()+1);
            else ui->licznik_kolko->display(ui->licznik_kolko->value()+1);

        }
        else if(winner == anticzym_gramy)
            {
                if(anticzym_gramy=="X") ui->licznik_krzyzyk->display(ui->licznik_krzyzyk->value()+1);
                else ui->licznik_kolko->display(ui->licznik_kolko->value()+1);
            }
            else
                {
                   ui->licznik_kolko->display(ui->licznik_kolko->value()+1);
                   ui->licznik_krzyzyk->display(ui->licznik_krzyzyk->value()+1);
                }


        if(ui->licznik_kolko->value() == max_pkt ||ui->licznik_krzyzyk->value() == max_pkt)
        {
            koniec();

        }else
        {
            ui->guzik_start->show();
        }

        check1 = 0;
    }
    else
    {
        check1 =  1;
    }
}

void MainWindow::koniec()
{
    ui->guzik->hide();
    ui->guzik_2->hide();
    ui->guzik_3->hide();
    ui->guzik_4->hide();
    ui->guzik_5->hide();
    ui->guzik_6->hide();
    ui->guzik_7->hide();
    ui->guzik_8->hide();
    ui->guzik_9->hide();
    ui->guzik_kolko->hide();
    ui->guzik_krzyzyk->hide();
    ui->wynik->hide();
    ui->licznik_kolko->hide();
    ui->licznik_krzyzyk->hide();
    ui->wynik_kolko->hide();
    ui->wynik_krzyzyk->hide();

    ui->wygrana->setText("");

    if(ui->licznik_kolko->value() > ui->licznik_krzyzyk->value())
    {
        ui->wygrana->setText("Wygrywa O");
    }
    else if(ui->licznik_kolko->value() < ui->licznik_krzyzyk->value())
        {
            ui->wygrana->setText("Wygrywa X");
        }
        else
            {
                ui->wygrana->setText("REMIS");
            }

    ui->restart->show();
}


void MainWindow::on_restart_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void MainWindow::on_doilu_currentIndexChanged(int index)
{
    max_pkt = index+1;
}
