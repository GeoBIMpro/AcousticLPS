#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLineEdit>
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
protected slots:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;
private:
    Ui::MainWindow *ui;
    void initUi();
    void loadUi();
    void saveUi();
    void invalidate();
    void simulateMeasures();
private slots:
    void bufferReady(float *buffer, unsigned long size);
};

#endif // MAINWINDOW_H
