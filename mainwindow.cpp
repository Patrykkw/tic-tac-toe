#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qstring.h>
using namespace std;
int XO,z,zz,zx,xx,zc,xc,cc,zv,xv,wo=0,wx=0,wwo=0,wwx=0,woo=0,wxx=0,aa=0,ab=0,ac=0,ad=0,ae=0,af=0,ag=0,ah=0,ai=0,aj=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_5_clicked()
{
    z++;
    if(z==1){

    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_5-> setText("X"),wx++,aa++,ac++;;;;}
    else {/*changetext("O");*/ ui-> pushButton_5-> setText("O"),wo++,ab++,ad++;;;; }
    }
    if(wx==3 || wo==3 || aa==3 || ab==3 || ac==3 || ad==3){
        ui->label->setText("WINNER!");
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    zz++;
    if(zz==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_4-> setText("X"),wx++,ae++;;;}
    else {/*changetext("O");*/ ui-> pushButton_4-> setText("O"),wo++,af++;;; }
    }
    if(wx==3 || wo==3 || ae==3 || af==3){
        ui->label->setText("WINNER!");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    zx++;
    if(zx==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_3-> setText("X"),wwx++,ac++,ae++,ai++;;;;;}
    else {/*changetext("O");*/ ui-> pushButton_3-> setText("O"),wwo++,ad++,af++,aj++;;;;; }
    }
    if(wwx==3 || wwo==3 || ac==3 || ad==3 || af==3 || ae==3|| aj==3|| ai==3){
        ui->label->setText("WINNER!");
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    xx++;
    if(xx==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_9-> setText("X"),wwx++,aa++;;;}
    else {/*changetext("O");*/ ui-> pushButton_9-> setText("O"),wwo++,ab++;;; }
    }
    if(wwx==3 || wwo==3 || aa==3 || ab==3){
        ui->label->setText("WINNER!");
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    zc++;
    if(zc==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_7-> setText("X"),wx++,ag++,ai++;;;;}
    else {/*changetext("O");*/ ui-> pushButton_7-> setText("O"),wo++,ah++,aj++;;;; }
}
    if(wx==3 || wo==3 || ag==3 || ah==3 || aj==3|| ai==3){
        ui->label->setText("WINNER!");
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    xc++;
    if(xc==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_6-> setText("X"),wwx++,ag++;;;}
    else {/*changetext("O");*/ ui-> pushButton_6-> setText("O"),wwo++,ah++;;; }
    }
    if(wwx==3 || wwo==3 || ag==3 || ah==3){
        ui->label->setText("WINNER!");
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    cc++;
    if(cc==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_11-> setText("X"),wxx++,aa++,ai++;;;;}
    else {/*changetext("O");*/ ui-> pushButton_11-> setText("O"),woo++,ab++,aj++;;;; }
    }
    if(wxx==3 || woo==3 || aa==3 || ab==3|| aj==3|| ai==3){
        ui->label->setText("WINNER!");
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    zv++;
    if(zv==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_8-> setText("X"),wxx++,ac++,ag++;;;;}
    else {/*changetext("O");*/ ui-> pushButton_8-> setText("O"),woo++,ad++,ah++;;;; }
    }
    if(wxx==3 || woo==3 || ac==3 || ad==3 || ag==3 || ah==3){
        ui->label->setText("WINNER!");
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    xv++;
    if(xv==1){
    XO++;
    if(XO%2==1){ /*changetext("X");*/ui-> pushButton_10-> setText("X"),wxx++,ae++;;;}
    else {/*changetext("O");*/ ui-> pushButton_10-> setText("O"),woo++,af++;;; }
    }
    if(wxx==3 || woo==3 || ae==3 || af==3){
        ui->label->setText("WINNER!");
    }
}
