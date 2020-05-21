#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "uartdialog.h"
#include "aboutdialog.h"
//#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QString>
#include <QMenuBar>
#include <QAction>
#include <QByteArray>
#include <QTimer>
#include <QTextStream>
#include <QDebug>

QByteArray ba;
QSerialPort serial;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenu *file = menuBar()->addMenu("File");
    QAction *CloseWindows = new QAction(tr("Exit"), this);
    file->addAction(CloseWindows);
    connect(CloseWindows, SIGNAL(triggered()), this, SLOT(close()));

    QMenu *settings = menuBar()->addMenu("Settings");
    QAction *UART = new QAction(tr("UART"), this);
    settings->addAction(UART);
    connect(UART, SIGNAL(triggered()), this, SLOT(UART_Connect()));

    QMenu *help = menuBar()->addMenu("Help");
    QAction *About = new QAction(tr("About"), this);
    help->addAction(About);
    connect(About, SIGNAL(triggered()), this, SLOT(About()));

    ui->label_2->setFixedSize(10,10);
    ui->label_2->setStyleSheet("border-radius: 5px; background-color: red;");
    ui->label_2->setAlignment(Qt::AlignHCenter);
    connect(&serial, SIGNAL(readyRead()), this, SLOT(UART_Receive()));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(led_blink()));
    timer->start(300);

    ui->label_9->setFixedSize(10,10);
    ui->label_9->setStyleSheet("border-radius: 5px; background-color: red;");
    ui->label_9->setAlignment(Qt::AlignHCenter);

    ui->label_12->setFixedSize(10,10);
    ui->label_12->setStyleSheet("border-radius: 5px; background-color: red;");
    ui->label_12->setAlignment(Qt::AlignHCenter);

    ui->label_13->setFixedSize(10,10);
    ui->label_13->setStyleSheet("border-radius: 5px; background-color: red;");
    ui->label_13->setAlignment(Qt::AlignHCenter);

    ui->label_8->setText("Stopper 1");
    ui->label_8->setAlignment(Qt::AlignHCenter);

    ui->label_10->setAlignment(Qt::AlignHCenter);
    ui->label_10->setText("Stopper 2");

    ui->label_11->setAlignment(Qt::AlignHCenter);
    ui->label_11->setText("Stopper 3");

    ui->lineEdit->setText("500");
    ui->lineEdit_2->setText("500");
    ui->lineEdit_3->setText("500");
    ui->lineEdit_4->setText("500");
    ui->lineEdit_5->setText("500");
    ui->lineEdit_6->setText("500");

    ui->comboBox_2->addItem("FULL STEP");
    ui->comboBox_2->addItem("HALF STEP");
    ui->comboBox_2->addItem("QUARTER STEP");
    ui->comboBox_2->addItem("EIGHTH STEP");
    ui->comboBox_2->addItem("SIXTEENTH STEP");
    ui->comboBox_2->setCurrentText("FULL STEP");

    ui->comboBox_3->addItem("FULL STEP");
    ui->comboBox_3->addItem("HALF STEP");
    ui->comboBox_3->addItem("QUARTER STEP");
    ui->comboBox_3->addItem("EIGHTH STEP");
    ui->comboBox_3->addItem("SIXTEENTH STEP");

    ui->comboBox_4->addItem("RIGHT");
    ui->comboBox_4->addItem("LEFT");

    ui->comboBox_5->addItem("FULL STEP");
    ui->comboBox_5->addItem("HALF STEP");
    ui->comboBox_5->addItem("QUARTER STEP");
    ui->comboBox_5->addItem("EIGHTH STEP");
    ui->comboBox_5->addItem("SIXTEENTH STEP");
    ui->comboBox_5->setCurrentText("FULL STEP");

    ui->comboBox_6->addItem("OPEN");
    ui->comboBox_6->addItem("CLOSE");

    ui->comboBox_7->addItem("FULL STEP");
    ui->comboBox_7->addItem("HALF STEP");
    ui->comboBox_7->addItem("QUARTER STEP");
    ui->comboBox_7->addItem("EIGHTH STEP");
    ui->comboBox_7->addItem("SIXTEENTH STEP");

    ui->comboBox_8->addItem("RIGHT");
    ui->comboBox_8->addItem("LEFT");

    ui->comboBox_9->addItem("RIGHT");
    ui->comboBox_9->addItem("LEFT");

    ui->comboBox->addItem("RIGHT");
    ui->comboBox->addItem("LEFT");

    ui->comboBox_10->addItem("FULL STEP");
    ui->comboBox_10->addItem("HALF STEP");
    ui->comboBox_10->addItem("QUARTER STEP");
    ui->comboBox_10->addItem("EIGHTH STEP");
    ui->comboBox_10->addItem("SIXTEENTH STEP");
    ui->comboBox_10->setCurrentText("FULL STEP");

    ui->comboBox_11->addItem("FULL STEP");
    ui->comboBox_11->addItem("HALF STEP");
    ui->comboBox_11->addItem("QUARTER STEP");
    ui->comboBox_11->addItem("EIGHTH STEP");
    ui->comboBox_11->addItem("SIXTEENTH STEP");
    ui->comboBox_11->setCurrentText("FULL STEP");

    ui->comboBox_12->addItem("FULL STEP");
    ui->comboBox_12->addItem("HALF STEP");
    ui->comboBox_12->addItem("QUARTER STEP");
    ui->comboBox_12->addItem("EIGHTH STEP");
    ui->comboBox_12->addItem("SIXTEENTH STEP");
    ui->comboBox_12->setCurrentText("FULL STEP");

    ui->horizontalSlider->setMinimum(1);
    ui->horizontalSlider_2->setMinimum(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rightButton_clicked()
{
    QString str1 = ui->lineEdit->text();
    serial.putChar(static_cast<char>(0xF8)); //START BIT
    serial.putChar(0x01); //Driver 1
    serial.putChar(0x52); //RIGHT

    if(ui->comboBox_2->currentText() == "FULL STEP")
        serial.putChar(0x46);
    else if(ui->comboBox_2->currentText() == "HALF STEP")
        serial.putChar(0x48);
    else if(ui->comboBox_2->currentText() == "QUARTER STEP")
        serial.putChar(0x51);
    else if(ui->comboBox_2->currentText() == "EIGHTH STEP")
        serial.putChar(0x45);
    else if(ui->comboBox_2->currentText() == "SIXTEENTH STEP")
        serial.putChar(0x53);

    int32_t value = str1.toLong();
    int first = value & 0xFF;
    int second = value >> 8;
    serial.putChar(static_cast<char>(second)); //SECOND BIT
    serial.putChar(static_cast<char>(first)); //FIRST BIT

    serial.putChar(0x00);
    serial.putChar(static_cast<char>(value_slider));

    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    ui->txtOutput->append("right Driver 1");
    ui->txtOutput->append(str1);
}

void MainWindow::on_leftButton_clicked()
{
    QString str2 = ui->lineEdit_2->text();
    serial.putChar(static_cast<char>(0xF8)); //START BIT
    serial.putChar(0x01); //Driver 1
    serial.putChar(0x55); //LEFT

    if(ui->comboBox_2->currentText() == "FULL STEP")
        serial.putChar(0x46);
    else if(ui->comboBox_2->currentText() == "HALF STEP")
        serial.putChar(0x48);
    else if(ui->comboBox_2->currentText() == "QUARTER STEP")
        serial.putChar(0x51);
    else if(ui->comboBox_2->currentText() == "EIGHTH STEP")
        serial.putChar(0x45);
    else if(ui->comboBox_2->currentText() == "SIXTEENTH STEP")
        serial.putChar(0x53);

    int32_t value = str2.toLong();
    int first = value & 0xFF;
    int second = value >> 8;
    serial.putChar(static_cast<char>(second)); //SECOND BIT
    serial.putChar(static_cast<char>(first)); //FIRST BIT

    serial.putChar(0x00);
    serial.putChar(static_cast<char>(value_slider));

    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    ui->txtOutput->append("left Driver 1");
    ui->txtOutput->append(str2);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->label->setNum(value);
    value_slider = value;
}

void MainWindow::on_leftButton_2_clicked()
{
    QByteArray data;
    QString str2 = ui->lineEdit_4->text();
    serial.putChar(static_cast<char>(0xF8)); //START BIT
    serial.putChar(0x02); //Driver 2
    serial.putChar(0x55); //LEFT

    if(ui->comboBox_3->currentText() == "FULL STEP")
        serial.putChar(0x46);
    else if(ui->comboBox_3->currentText() == "HALF STEP")
        serial.putChar(0x48);
    else if(ui->comboBox_3->currentText() == "QUARTER STEP")
        serial.putChar(0x51);
    else if(ui->comboBox_3->currentText() == "EIGHTH STEP")
        serial.putChar(0x45);
    else if(ui->comboBox_3->currentText() == "SIXTEENTH STEP")
        serial.putChar(0x53);

    int32_t value = str2.toLong();
    int first = value & 0xFF;
    int second = value >> 8;
    serial.putChar(static_cast<char>(second)); //SECOND BIT
    serial.putChar(static_cast<char>(first)); //FIRST BIT

    serial.putChar(0x00);
    serial.putChar(static_cast<char>(value_slider2));

    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    ui->txtOutput->append("open Driver 2");
    ui->txtOutput->append(str2);
}

void MainWindow::on_rightButton_2_clicked()
{
    QString str1 = ui->lineEdit_3->text();
    serial.putChar(static_cast<char>(0xF8)); //START BIT
    serial.putChar(0x02); //Driver 2
    serial.putChar(0x52); //RIGHT

    if(ui->comboBox_3->currentText() == "FULL STEP")
        serial.putChar(0x46);
    else if(ui->comboBox_3->currentText() == "HALF STEP")
        serial.putChar(0x48);
    else if(ui->comboBox_3->currentText() == "QUARTER STEP")
        serial.putChar(0x51);
    else if(ui->comboBox_3->currentText() == "EIGHTH STEP")
        serial.putChar(0x45);
    else if(ui->comboBox_3->currentText() == "SIXTEENTH STEP")
        serial.putChar(0x53);

    int32_t value = str1.toLong();
    int first = value & 0xFF;
    int second = value >> 8;
    serial.putChar(static_cast<char>(second)); //SECOND BIT
    serial.putChar(static_cast<char>(first)); //FIRST BIT

    serial.putChar(0x00);
    serial.putChar(static_cast<char>(value_slider2));

    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    ui->txtOutput->append("close Driver 2");
    ui->txtOutput->append(str1);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    ui->label_3->setNum(value);
    value_slider2 = value;
}

void MainWindow::on_rightButton_3_clicked()
{
    QString str1 = ui->lineEdit_5->text();
    QString str2 = ui->lineEdit_6->text();

    serial.putChar(static_cast<char>(0xF8)); //START BIT
    serial.putChar(0x01); //Driver 1

    if(ui->comboBox_4->currentText() == "LEFT")
        serial.putChar(0x55);
    else if(ui->comboBox_4->currentText() == "RIGHT")
        serial.putChar(0x52);

    if(ui->comboBox_5->currentText() == "FULL STEP")
        serial.putChar(0x46);
    else if(ui->comboBox_5->currentText() == "HALF STEP")
        serial.putChar(0x48);
    else if(ui->comboBox_5->currentText() == "QUARTER STEP")
        serial.putChar(0x51);
    else if(ui->comboBox_5->currentText() == "EIGHTH STEP")
        serial.putChar(0x45);
    else if(ui->comboBox_5->currentText() == "SIXTEENTH STEP")
        serial.putChar(0x53);

    int32_t value1 = str1.toLong();
    int first1 = value1 & 0xFF;
    int second1 = value1 >> 8;

    serial.putChar(static_cast<char>(second1)); //SECOND BIT
    serial.putChar(static_cast<char>(first1)); //FIRST BIT

    serial.putChar(0x00);
    serial.putChar(0x08);

    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    /*-----------------------------------------------------------------*/

    serial.putChar(static_cast<char>(0xF8)); //START BIT
    serial.putChar(0x02); //Driver 2

    if(ui->comboBox_6->currentText() == "OPEN")
        serial.putChar(0x55);
    else if(ui->comboBox_6->currentText() == "CLOSE")
        serial.putChar(0x52);

    if(ui->comboBox_7->currentText() == "FULL STEP")
        serial.putChar(0x46);
    else if(ui->comboBox_7->currentText() == "HALF STEP")
        serial.putChar(0x48);
    else if(ui->comboBox_7->currentText() == "QUARTER STEP")
        serial.putChar(0x51);
    else if(ui->comboBox_7->currentText() == "EIGHTH STEP")
        serial.putChar(0x45);
    else if(ui->comboBox_7->currentText() == "SIXTEENTH STEP")
        serial.putChar(0x53);

    int32_t value2 = str2.toLong();
    int first2 = value2 & 0xFF;
    int second2 = value2 >> 8;

    serial.putChar(static_cast<char>(second2)); //SECOND BIT
    serial.putChar(static_cast<char>(first2)); //FIRST BIT

    serial.putChar(0x00);
    serial.putChar(0x01);

    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    ui->txtOutput->append("Driver 1");
    ui->txtOutput->append(str1);
    ui->txtOutput->append("Driver 2");
    ui->txtOutput->append(str2);
}

void MainWindow::UART_Connect()
{
    UARTDialog *cnt = new UARTDialog;
    cnt->show();
}

void MainWindow::About()
{
    AboutDialog *abt = new AboutDialog;
    abt->show();
}

void MainWindow::UART_Receive()
{
    ba = serial.readAll();

    if(ba.at(0) == 0x70)
    {
        ui->label_2->setStyleSheet("border-radius: 5px; background-color: green;");
        ui->txtOutput->append("StopMotor1");
    }
    else if(ba.at(0) == 0x54)
    {
        ui->label_2->setStyleSheet("border-radius: 5px; background-color: red;");
    }

    if(ba.at(0) == 0x71)
    {
        ui->label_9->setStyleSheet("border-radius: 5px; background-color: green;");
        ui->txtOutput->append("StopMotor2");
    }
    else if(ba.at(0) == 0x44)
    {
        ui->label_9->setStyleSheet("border-radius: 5px; background-color: red;");
    }

    if(ba.at(0) == 0x72)
    {
        ui->label_9->setStyleSheet("border-radius: 5px; background-color: green;");
        ui->txtOutput->append("StopMotor3");
    }
    else if(ba.at(0) == 0x34)
    {
        ui->label_9->setStyleSheet("border-radius: 5px; background-color: red;");
    }

    if(ba.at(0) == 0x15)
    {
        ui->txtOutput->append("Wrong direction motor1");
    }

    if(ba.at(0) == 0x16)
    {
        ui->txtOutput->append("Wrong direction motor2");
    }

    if(ba.at(0) == 0x25)
    {
        ui->txtOutput->append("Memory flash W25Q16!");
    }

    if(ba.at(0) == 0x26)
    {
        ui->txtOutput->append("Memory flash error!");
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_2->setStyleSheet("border-radius: 5px; background-color: red;");
    ui->label_9->setStyleSheet("border-radius: 5px; background-color: red;");
    ui->label_9->setStyleSheet("border-radius: 5px; background-color: red;");

    ui->txtOutput->clear();
}

void MainWindow::on_pushButton_3_clicked() // READ
{
    QFile file("data.txt");
    quint8 motor_number = 1;

    ui->textEdit->clear();

    if(file.open(QIODevice::ReadOnly))
    {
        QDataStream in(&file);
        while(!in.atEnd())
        {
            in >> motor_rc[count_string][motor_number];

            qDebug() << count_string << motor_rc[count_string][motor_number].qMotor << motor_rc[count_string][motor_number].qDirection << motor_rc[count_string][motor_number].qMode;

            ui->textEdit->append(motor_rc[count_string][motor_number].qMotor);
            ui->textEdit->append(motor_rc[count_string][motor_number].qDirection);
            ui->textEdit->append(motor_rc[count_string][motor_number].qMode);

            if(motor_number == COUNT)
            {
                count_string++;
                motor_number = 1;
            }
            else motor_number++;
        }
    }

    qDebug() << "file was read";
    file.close();
}

void MainWindow::on_pushButton_2_clicked() // WRITE
{
    QFile file("data.txt");

    if(file.open(QIODevice::Append))
    {
        QDataStream out(&file);
        char i = 0;

        while(!out.atEnd())
        {
            ++i;
        }

        motor[i][0].qMotor = ui->lineEdit_7->text();
        motor[i][0].qDirection = ui->comboBox_9->currentText();
        motor[i][0].qMode = ui->comboBox_10->currentText();

        motor[i][1].qMotor = ui->lineEdit_8->text();
        motor[i][1].qDirection = ui->comboBox_8->currentText();
        motor[i][1].qMode = ui->comboBox_11->currentText();

        motor[i][2].qMotor = ui->lineEdit_9->text();
        motor[i][2].qDirection = ui->comboBox->currentText();
        motor[i][2].qMode = ui->comboBox_12->currentText();

        if(motor[i][0].qMotor != NULL && motor[i][1].qMotor != NULL && motor[i][2].qMotor != NULL)
        {
            for(uint8_t x = 1; x <= COUNT; x++)
            {
                out << motor[i][x].qMotor << motor[i][x].qDirection << motor[i][x].qMode;
                qDebug() << "file was write";
            }
        }
        else
        {
            qDebug() << "error value";
        }
        file.close();
    }
}

void MainWindow::on_pushButton_4_clicked() //START
{
    char i = 1;
    for(char y = 1; y <= 2; y++)
    {
        serial.putChar(static_cast<char>(0xF8)); //START BIT
        serial.putChar(y); //Driver

        if(motor_rc[i][y].qDirection == "LEFT")
            serial.putChar(0x52);
        else if(motor_rc[i][y].qDirection == "RIGHT")
            serial.putChar(0x55);

        if(motor_rc[i][y].qMode == "FULL STEP")
            serial.putChar(0x46);
        else if(motor_rc[i][y].qMode == "HALF STEP")
            serial.putChar(0x48);
        else if(motor_rc[i][y].qMode == "QUARTER STEP")
            serial.putChar(0x51);
        else if(motor_rc[i][y].qMode == "EIGHTH STEP")
            serial.putChar(0x45);
        else if(motor_rc[i][y].qMode == "SIXTEENTH STEP")
            serial.putChar(0x53);

        int32_t value2 = motor_rc[i][y].qMotor.toLong();
        int first2 = value2 & 0xFF;
        int second2 = value2 >> 8;

        serial.putChar(static_cast<char>(second2)); //SECOND BIT
        serial.putChar(static_cast<char>(first2)); //FIRST BIT

        serial.putChar(0x00);
        serial.putChar(0x08);

        serial.putChar(static_cast<char>(0xE0)); //STOP BIT

        qDebug() << "data was send";
    }
}

void MainWindow::on_pushButton_5_clicked() //DELETE
{
    QFile file("data.txt");
    ui->textEdit->clear();
    file.remove();
    count_string = 1;
}

void MainWindow::led_blink()
{
    static uint8_t f;
    if(serial.isOpen() && f == 1)
    {
        ui->label_13->setFixedSize(20,20);
        ui->label_13->setStyleSheet("border-radius: 0px; background-color: green;");
        ui->label_13->setAlignment(Qt::AlignHCenter);
        f = 0;
    }
    else if(f == 0)
    {
        ui->label_13->setFixedSize(20,20);
        ui->label_13->setStyleSheet("border-radius: 0px; background-color: red;");
        ui->label_13->setAlignment(Qt::AlignHCenter);
        f = 1;
    }
}
