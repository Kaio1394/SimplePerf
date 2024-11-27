#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define WIN32_LEAN_AND_MEAN
#include <QMainWindow>
#include "httplib.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    httplib::Result* RequestGet(std::string uri);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
