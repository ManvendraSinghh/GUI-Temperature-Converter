#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class temperature; }
QT_END_NAMESPACE

class temperature : public QMainWindow
{
    Q_OBJECT

public:
    temperature(QWidget *parent = nullptr);
    ~temperature();

private:
    Ui::temperature *ui;

private slots:
    void convert_to_farenheit_pressed();
    void on_Convert_to_celsius_released();
};
#endif // TEMPERATURE_H
