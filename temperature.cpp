#include "temperature.h"
#include "ui_temperature.h"

temperature::temperature(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::temperature)
{
    ui->setupUi(this);
    connect(ui->Convert_to_farenheit,SIGNAL(released()),this,SLOT(convert_to_farenheit_pressed()));
    connect(ui->Convert_to_celsius,SIGNAL(released()),this,SLOT(on_Convert_to_celsius_released()));

}

temperature::~temperature()
{
    delete ui;
}

void temperature::convert_to_farenheit_pressed()
{
    double degcelsius,degfarenheit;
    QString newLabel;

    degcelsius = ui->Celsius->text().toDouble();
    degfarenheit = ( 1.8 * degcelsius ) + 32;
    newLabel = QString::number(degfarenheit,'g',6);
    ui->Farenheit->setText(newLabel);

}


void temperature::on_Convert_to_celsius_released()
{
    double degcel,degfaren;
    QString nwLabel;

    degfaren = ui->Farenheit->text().toDouble();
    degcel = (degfaren - 32.0) * 5.0 / 9.0;
    nwLabel = QString::number(degcel,'g',6);
    ui->Celsius->setText(nwLabel);
}

