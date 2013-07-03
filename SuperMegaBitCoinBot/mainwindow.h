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
