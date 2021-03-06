#define CHARTS_GRAPHIC "http://bitcoincharts.com/charts/chart.png?width=940&m=mtgoxUSD&SubmitButton=Draw&r=60&i=&c=0&s=&e=&Prev=&Next=&t=S&b=&a1=&m1=10&a2=&m2=25&x=0&i1=&i2=&i3=&i4=&v=1&cv=0&ps=0&l=0&p=0&"
#define IN_DOLLARS 1;
#define IN_BITCOINS 2;

#include <QDebug>
#include <QTimer>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow (QWidget *parent) :
    QMainWindow(parent),
    ui (new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->webView->load ( QUrl ( CHARTS_GRAPHIC ) );
    this->updateInterval = 3000;
    this->minimalDifference = 0.1;
}

MainWindow::~MainWindow ()
{
    delete ui;
}

void MainWindow::startEarning ()
{
    qDebug () << "Starting earning";

    ui->startEarningButton->setText ( "Money is earning" );

    QTimer *timer = new QTimer ( this );
    connect( timer, SIGNAL( timeout () ), this, SLOT( updateResults () ) );
    timer->start ( this->updateInterval ); // every three seconds

}

void MainWindow::updateResults ()
{
    qDebug () << "Updating results";
    ui->webView->load ( QUrl ( CHARTS_GRAPHIC ) );
}

void MainWindow::updateGUI ( int BTCRate, int balance_btc, int balance_usd, int casheUSD )
{
    qDebug () << "Updating GUI";
}

void MainWindow::on_startEarningButton_clicked ()
{
   qDebug () << "Button clicked";

   QString APIKey =  ui->apiKeyEdit->text();
   QString secretKey = ui->secretKeyEdit->text();

   this->startEarning();

}

void MainWindow::on_spinBox_editingFinished()
{
    this->updateInterval = ui->spinBox->value();
}

void MainWindow::on_spinBox_valueChanged(int newValue)
{
    this->updateInterval = newValue;
    qDebug () << "Value changed";
}
