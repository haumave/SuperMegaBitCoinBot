#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);

    void updateGUI ( int BTCRate, int balance_btc, int balance_usd, int casheUSD ); //being called from webInterface

    ~MainWindow();

private slots:
    void on_startEarningButton_clicked();
    void updateResults ();

    void on_spinBox_editingFinished();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    int updateInterval;
    int minimalDifference;
    void startEarning ();
};

#endif // MAINWINDOW_H
