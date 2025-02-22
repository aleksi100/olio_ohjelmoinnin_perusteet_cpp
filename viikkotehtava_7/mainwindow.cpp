#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->count, &QPushButton::clicked, this, &MainWindow::HandleClick);
    connect(ui->reset, &QPushButton::clicked, this, &MainWindow::HandleClick);

    // alustetaan numero nollaksi ja näytetään se
    number = 0;
    ui->result->setText(QString::number(number));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::HandleClick()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    if(name == "count"){
        ui->result->setText(QString::number(++number));
    }
    else if(name == "reset"){
        number = 0;
        ui->result->setText(QString::number(number));
    }
    qDebug() << "Button name:" << name;
}
