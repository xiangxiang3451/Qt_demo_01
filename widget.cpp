#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("第一个窗口");
    //    this->resize(300,300);
    this->setFixedSize(600,400);

    QPushButton *button=new QPushButton();

    button->setText("按钮1");
    button->setParent(this);
    button->resize(100,100);
    button->move(250,100);


    QPushButton *btn=new QPushButton("按钮二",this);




}

Widget::~Widget()
{
    delete ui;
}

