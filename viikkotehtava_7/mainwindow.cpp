#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // numeronappien signaalin ohjaus
    connect(ui->n0, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n1, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n2, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n3, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n4, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n5, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n6, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n7, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n8, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n9, &QPushButton::clicked, this, &MainWindow::numberClickHandler);

    // operaationappien signaalinohjaus
    connect(ui->plus, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->miinus, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    // enter- ja clear-nappien signaalinohjaus
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);

    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    if(state == 1){
        number1 += name[1];
        ui->num1->setText(number1);
    }
    if(state == 2){
        number2 += name[1];
        ui->num2->setText(number2);
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "enter"){
        if(state == 1){
            state = 2;
        }
        if(state == 2){
            if(operand == "plus")
                result = number1.toFloat() + number2.toFloat();
            if(operand == "miinus")
                result = number1.toFloat() - number2.toFloat();
            if(operand == "mul")
                result = number1.toFloat() * number2.toFloat();
            if(operand == "div")
                result = number1.toFloat() / number2.toFloat();
            ui->result->setText(QString::number(result));
        }
    }
    else if(name == "clear"){
        state = 1;
        number1 = "";
        number2 = "";
        result = 0;

        resetLineEdits();
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    operand = name;
    state = 2;
}

void MainWindow::resetLineEdits()
{
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
}
