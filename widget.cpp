#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_regi_clicked()
{
    QString guardar="ID "+ui->data_ID->text()+" VOLTAJE: "+ui->data_VOLTAJE->text()+" POSICION EN X "+ui->POSICIONX->text()+"POSICION EN Y "+ui->POSICIONY->text()+" RED "+ui->RED->text()+" GREEN "+ui->GREEN ->text()+" BLUE "+ui->BLUE->text();


    ui->RESULTADO->setText("LOS DATOS REGISRADOS SON "+guardar);
}

