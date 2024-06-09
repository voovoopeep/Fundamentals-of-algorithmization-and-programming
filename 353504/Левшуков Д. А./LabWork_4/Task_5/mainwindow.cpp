#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Pair<vector<int>,vector<Pair<int,double>>>matrix;
void MainWindow::show_ьфекшч()
{
    //First matrix
    ui->First->clear();
    std::string s="";
    //for(int i=0;i<matrix.first.size();i++)
    {
        //s+=std::to_string(matrix.first.at(i))+" ";
    }
    ui->First->setText(QString::fromStdString(s));

}
