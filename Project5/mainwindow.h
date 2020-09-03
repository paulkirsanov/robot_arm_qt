#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define COUNT   3

#include <QMainWindow>
#include <QSerialPort>
#include <QFile>
#include "uartdialog.h"
#include "aboutdialog.h"

typedef enum
{
    q_Motor1 = 0,
    q_Motor2 = 1,
    q_Motor3 = 2
} tMotor;

typedef enum
{
    CW = 0,
    CCW = 1,
    NONE = 2
} tMotorDir;

typedef enum
{
    FULL_STEP = 0,
    HALF_STEP,
    QUARTER_STEP,
    EIGHTH_STEP,
    SIXTEENTH_STEP
} tMotorMode;

typedef struct
{
    QString qMotor;
    QString qDirection;
    QString qMode;
    QString qSpeed;
} qRotate;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_leftButton_2_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

    void on_rightButton_2_clicked();

    void UART_Connect();

    void About();

    void UART_Receive();

    void on_pushButton_clicked();

    //void readFile();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void led_blink();

    friend QDataStream &operator>>(QDataStream &in, qRotate &p);
    friend QDataStream &operator<<(QDataStream &out, const qRotate &p);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

public slots:
    void UART_ConnectShow();

private:
    Ui::MainWindow *ui;

    UARTDialog UART_Object;

    qRotate motor[50][COUNT] = {};

    int value_slider = 1;
    int value_slider2 = 1;

    qRotate motor_rc[50][COUNT] = {};
    quint8 count_string = 0;

    quint8 ok_motor1 = 0;
    quint8 ok_motor2 = 0;
    quint8 ok_motor3 = 0;

    //QByteArray arr[3];
};

inline QDataStream &operator>>(QDataStream &in, qRotate &p)
{
    in >> p.qMotor;
    in >> p.qDirection;
    in >> p.qMode;
    in >> p.qSpeed;
    return in;
}

inline QDataStream &operator<<(QDataStream &out, const qRotate &p)
{
    out << p.qMotor;
    out << p.qDirection;
    out << p.qMode;
    out << p.qSpeed;
    return out;
}

#endif // MAINWINDOW_H
