#define WIN32_LEAN_AND_MEAN
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "httplib.h"
#include "QMessageBox"


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

httplib::Result* MainWindow::RequestGet(std::string uri){
    httplib::Client cli(uri);
    auto res = cli.Get("/posts/1");
    if (res && res->status == 200) {
        std::cout << "Resposta: " << res->body << std::endl;
    } else {
        std::cerr << "Erro na requisição" << std::endl;
    }
    return &res;
}

void MainWindow::on_pushButton_clicked()
{
    QString uriQString = ui->uri->text();
    std::string uri = uriQString.toStdString();
    httplib::Result* result = RequestGet(uri);
    QMessageBox::information(this, "Result", "Status = " + (*result)->status);
}

