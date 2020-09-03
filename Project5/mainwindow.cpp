#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    ui->label_2->setStyleSheet("border-radius: 5px; background-color: green;");
    ui->label_2->setAlignment(Qt::AlignHCenter);
    connect(&serial, SIGNAL(readyRead()), this, SLOT(UART_Receive()));

    ui->label_14->setText("0");
    ui->label_6->setText("0");

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(led_blink()));
    timer->start(50);

    connect(&UART_Object, SIGNAL(SendSignal()), SLOT(UART_ConnectShow()));

    ui->label_9->setFixedSize(10,10);
    ui->label_9->setStyleSheet("border-radius: 5px; background-color: green;");
    ui->label_9->setAlignment(Qt::AlignHCenter);

    ui->label_13->setFixedSize(10,10);
    ui->label_13->setStyleSheet("border-radius: 5px; background-color: red;");
    ui->label_13->setAlignment(Qt::AlignHCenter);

    ui->lineEdit->setText("1000");
    ui->lineEdit_2->setText("1000");
    ui->lineEdit_3->setText("1000");
    ui->lineEdit_4->setText("1000");

    ui->comboBox_2->addItem("FULL STEP");
    ui->comboBox_2->addItem("HALF STEP");
    ui->comboBox_2->addItem("QUARTER STEP");
    ui->comboBox_2->addItem("EIGHTH STEP");
    ui->comboBox_2->addItem("SIXTEENTH STEP");
    ui->comboBox_2->setCurrentText("SIXTEENTH STEP");

    ui->comboBox_3->addItem("FULL STEP");
    ui->comboBox_3->addItem("HALF STEP");
    ui->comboBox_3->addItem("QUARTER STEP");
    ui->comboBox_3->addItem("EIGHTH STEP");
    ui->comboBox_3->addItem("SIXTEENTH STEP");
    ui->comboBox_3->setCurrentText("SIXTEENTH STEP");

    ui->comboBox_8->addItem("RIGHT");
    ui->comboBox_8->addItem("LEFT");

    ui->comboBox_9->addItem("UP");
    ui->comboBox_9->addItem("DOWN");

    ui->comboBox->addItem("OPEN");
    ui->comboBox->addItem("CLOSE");

    ui->comboBox_10->addItem("FULL STEP");
    ui->comboBox_10->addItem("HALF STEP");
    ui->comboBox_10->addItem("QUARTER STEP");
    ui->comboBox_10->addItem("EIGHTH STEP");
    ui->comboBox_10->addItem("SIXTEENTH STEP");
    ui->comboBox_10->setCurrentText("SIXTEENTH STEP");

    ui->comboBox_11->addItem("FULL STEP");
    ui->comboBox_11->addItem("HALF STEP");
    ui->comboBox_11->addItem("QUARTER STEP");
    ui->comboBox_11->addItem("EIGHTH STEP");
    ui->comboBox_11->addItem("SIXTEENTH STEP");
    ui->comboBox_11->setCurrentText("SIXTEENTH STEP");

    ui->comboBox_12->addItem("FULL STEP");
    ui->comboBox_12->addItem("HALF STEP");
    ui->comboBox_12->addItem("QUARTER STEP");
    ui->comboBox_12->addItem("EIGHTH STEP");
    ui->comboBox_12->addItem("SIXTEENTH STEP");
    ui->comboBox_12->setCurrentText("SIXTEENTH STEP");

    ui->horizontalSlider->setMinimum(1);
    ui->horizontalSlider_2->setMinimum(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rightButton_clicked()
{
    if(serial.isOpen())
    {
        QString str1 = ui->lineEdit->text();
        serial.putChar(static_cast<char>(0xF8)); //START BIT
        serial.putChar(0x01); //Driver 1
        serial.putChar(0x52); //Down

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

        QColor color;
        color.setRgb(0, 0, 0);
        ui->txtOutput->setTextColor(color);
        ui->txtOutput->append("Driver 1 - Down");
        ui->txtOutput->append(str1);
    }
    else
    {
        QColor colorError;
        colorError.setRed(100);
        ui->txtOutput->setTextColor(colorError);
        ui->txtOutput->append("Error. UART is close.");
    }
}

void MainWindow::on_leftButton_clicked()
{
    if(serial.isOpen())
    {
        QString str2 = ui->lineEdit_2->text();
        serial.putChar(static_cast<char>(0xF8)); //START BIT
        serial.putChar(0x01); //Driver 1
        serial.putChar(0x55); //Up

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

        QColor color;
        color.setRgb(0, 0, 0);
        ui->txtOutput->setTextColor(color);
        ui->txtOutput->append("Driver 1 - Up");
        ui->txtOutput->append(str2);
    }
    else
    {
        QColor colorError;
        colorError.setRed(100);
        ui->txtOutput->setTextColor(colorError);
        ui->txtOutput->append("Error. UART is close.");
    }
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->label->setNum(value);
    value_slider = value;
}

void MainWindow::on_leftButton_2_clicked()
{
    if(serial.isOpen())
    {
        QByteArray data;
        QString str2 = ui->lineEdit_4->text();
        serial.putChar(static_cast<char>(0xF8)); //START BIT
        serial.putChar(0x02); //Driver 2
        serial.putChar(0x55); //Right

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

        QColor color;
        color.setRgb(0, 0, 0);
        ui->txtOutput->setTextColor(color);
        ui->txtOutput->append("Driver 2 - Right");
        ui->txtOutput->append(str2);
    }
    else
    {
        QColor colorError;
        colorError.setRed(100);
        ui->txtOutput->setTextColor(colorError);
        ui->txtOutput->append("Error. UART is close.");
    }
}

void MainWindow::on_rightButton_2_clicked()
{
    if(serial.isOpen())
    {
        QString str1 = ui->lineEdit_3->text();
        serial.putChar(static_cast<char>(0xF8)); //START BIT
        serial.putChar(0x02); //Driver 2
        serial.putChar(0x52); //Left

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

        QColor color;
        color.setRgb(0, 0, 0);
        ui->txtOutput->setTextColor(color);
        ui->txtOutput->append("Driver 2 - Left");
        ui->txtOutput->append(str1);
    }
    else
    {
        QColor colorError;
        colorError.setRed(100);
        ui->txtOutput->setTextColor(colorError);
        ui->txtOutput->append("Error. UART is close.");
    }
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    ui->label_3->setNum(value);
    value_slider2 = value;
}

void MainWindow::UART_Connect()
{
    UARTDialog *cnt = new UARTDialog;
    cnt->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint & ~Qt::WindowMinimizeButtonHint);
    cnt->show();
}

void MainWindow::About()
{
    AboutDialog *abt = new AboutDialog;
    abt->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint & ~Qt::WindowMinimizeButtonHint);
    abt->show();
}

void MainWindow::UART_Receive()
{
    ba = serial.readAll();

    if(ba.at(0) == 0x70)
    {
        ui->label_2->setStyleSheet("border-radius: 5px; background-color: red;");
        ui->txtOutput->append("StopMotor1");
    }
    else if(ba.at(0) == 0x54)
    {
        ui->label_2->setStyleSheet("border-radius: 5px; background-color: green;");
    }

    if(ba.at(0) == 0x71)
    {
        ui->label_9->setStyleSheet("border-radius: 5px; background-color: red;");
        ui->txtOutput->append("StopMotor2");
    }
    else if(ba.at(0) == 0x44)
    {
        ui->label_9->setStyleSheet("border-radius: 5px; background-color: green;");
    }

    if(ba.at(0) == 0x15)
    {
        ui->txtOutput->append("Wrong direction motor1");
    }

    if(ba.at(0) == 0x16)
    {
        ui->txtOutput->append("Wrong direction motor2");
    }

    if(ba.at(0) == 0x23)
    {
        quint8 value1 = static_cast<quint8>(ba.at(1));
        quint8 value2 = static_cast<quint8>(ba.at(2));

        quint16 value = static_cast<quint16>((value2 << 8) | value1);
        QString str;
        str.setNum(value);
        qDebug() << str;
        ui->label_14->setText(str);
    }

    if(ba.at(0) == 0x24)
    {
        quint8 value1 = static_cast<char>(ba.at(1));
        quint8 value2 = static_cast<char>(ba.at(2));

        quint16 value = static_cast<quint16>((value2 << 8) | value1);
        QString str;
        str.setNum(value);
        qDebug() << value;
        ui->label_6->setText(str);
    }

    if(ba.at(0) == 0x25)
    {
        ui->txtOutput->append("Memory flash W25Q16!");
    }

    if(ba.at(0) == 0x26)
    {
        ui->txtOutput->append("Memory flash error!");
    }

    if(ba.at(0) == 0x27)
    {
        ui->txtOutput->append("Motor 1 has finished");
        qDebug() << "Motor 1 has finished";
        ok_motor1 = 1;
    }
    else if(ba.at(0) == 0x28)
    {
        ui->txtOutput->append("Motor 2 has finished");
        qDebug() << "Motor 2 has finished";
        ok_motor2 = 1;
    }
    else if(ba.at(0) == 0x29)
    {
        ui->txtOutput->append("Motor 3 has finished");
        qDebug() << "Motor 3 has finished";
        ok_motor3 = 1;
    }

    if(ba.at(0) == 0x30)
    {
        ui->txtOutput->append("MCU ready");
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_2->setStyleSheet("border-radius: 5px; background-color: green;");
    ui->label_9->setStyleSheet("border-radius: 5px; background-color: green;");
    ui->label_9->setStyleSheet("border-radius: 5px; background-color: green;");

    ui->txtOutput->clear();
}

void MainWindow::on_pushButton_3_clicked() // READ
{
    QFile file("data.txt");
    quint8 motor_number = 1;
    count_string = 0;

    ui->textEdit->clear();

    if(file.exists())
    {
        if(file.open(QIODevice::ReadOnly))
        {
            QDataStream in(&file);
            while(!in.atEnd())
            {
                in >> motor_rc[count_string][motor_number];

                qDebug() << count_string << motor_number << motor_rc[count_string][motor_number].qMotor << motor_rc[count_string][motor_number].qDirection << motor_rc[count_string][motor_number].qMode << motor_rc[count_string][motor_number].qSpeed;

                ui->textEdit->insertPlainText(motor_rc[count_string][motor_number].qMotor);
                ui->textEdit->insertPlainText(" ");
                ui->textEdit->insertPlainText(motor_rc[count_string][motor_number].qDirection);
                ui->textEdit->insertPlainText(" ");
                ui->textEdit->insertPlainText(motor_rc[count_string][motor_number].qMode);
                ui->textEdit->insertPlainText(" ");
                ui->textEdit->insertPlainText(motor_rc[count_string][motor_number].qSpeed);
                ui->textEdit->insertPlainText("\t");

                if(motor_number == COUNT)
                {
                    count_string++;
                    motor_number = 1;
                    ui->textEdit->insertPlainText("\r\n");
                }
                else motor_number++;
            }
        }
        qDebug() << "File was read";
        ui->txtOutput->append("File was read");
        qDebug() << count_string << "strings";
        file.close();
    }
    else
    {
        qDebug() << "file wasn't find";
        ui->txtOutput->append("file wasn't find");
    }
}

void MainWindow::on_pushButton_2_clicked() // WRITE
{
    QFile file("data.txt");
    int i = 0;

    QDataStream out(&file);

    if(file.exists())
    {
        while(!out.atEnd())
        {
            i++;
        }
    }
    else i = 0;

    if(file.open(QIODevice::Append))
    {

        motor[i][0].qMotor = ui->lineEdit_7->text();
        motor[i][0].qDirection = ui->comboBox_9->currentText();
        motor[i][0].qMode = ui->comboBox_10->currentText();
        motor[i][0].qSpeed = QString("1");

        motor[i][1].qMotor = ui->lineEdit_8->text();
        motor[i][1].qDirection = ui->comboBox_8->currentText();
        motor[i][1].qMode = ui->comboBox_11->currentText();
        motor[i][1].qSpeed = QString("1");

        motor[i][2].qMotor = ui->lineEdit_9->text();
        motor[i][2].qDirection = ui->comboBox->currentText();
        motor[i][2].qMode = ui->comboBox_12->currentText();
        motor[i][2].qSpeed = QString("1");

        if(motor[i][0].qMotor != " " && motor[i][1].qMotor != " " && motor[i][2].qMotor != " ")
        {
            for(uint8_t x = 0; x < COUNT; x++)
            {
                out << motor[i][x].qMotor << motor[i][x].qDirection << motor[i][x].qMode << motor[i][x].qSpeed;
                qDebug() << "File was write";
                ui->txtOutput->append("File was write");
            }
        }
        else
        {
            qDebug() << "Error value";
        }
        file.close();
    }
}

void MainWindow::on_pushButton_4_clicked() //START
{
    if(serial.isOpen())
    {
        for(int i = 0; i != count_string; i++)
        {
            for(int y = 1; y != COUNT + 1; y++)
            {
                if(serial.isOpen())
                {
                    if(y == COUNT)
                    {
                        serial.putChar(static_cast<char>(0xF9)); //START BIT
                        if(motor_rc[i][y].qDirection == "OPEN")
                            serial.putChar(0x5A);
                        else if(motor_rc[i][y].qDirection == "CLOSE")
                            serial.putChar(0xB4);
                        serial.putChar(0x00);
                        serial.putChar(0x00);
                        serial.putChar(0x00);
                        serial.putChar(0x00);
                        serial.putChar(0x00);
                        serial.putChar(0x00);
                        serial.putChar(static_cast<char>(0xE0)); //STOP BIT

                        qDebug() << "Data was send";
                        ui->txtOutput->append("Start gripper");
                    } else
                    {
                        serial.putChar(static_cast<char>(0xF8)); //START BIT
                        serial.putChar(static_cast<char>(y)); //Driver

                        if(y == 1)
                        {
                            if(motor_rc[i][y].qDirection == "DOWN")
                                serial.putChar(0x52);
                            else if(motor_rc[i][y].qDirection == "UP")
                                serial.putChar(0x55);
                        }
                        else if(y == 2)
                        {
                            if(motor_rc[i][y].qDirection == "LEFT")
                                serial.putChar(0x52);
                            else if(motor_rc[i][y].qDirection == "RIGHT")
                                serial.putChar(0x55);
                        }

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
                        int s = motor_rc[i][y].qSpeed.toInt();
                        serial.putChar(static_cast<char>(s));

                        serial.putChar(static_cast<char>(0xE0)); //STOP BIT

                        qDebug() << "Data was send";
                        ui->txtOutput->append("Start motor");
                        ui->txtOutput->insertPlainText(QString::number(y));
                    }
                }

            }

            /*if(i == count_string - 1 && ui->repeat_checkBox->isChecked())
            {
                if(ok_motor1 == 1 && ok_motor2 == 1 && ok_motor3 == 1)
                    i = 0;
                QThread::sleep(2);
            }*/
        }
    }
    else
    {
        QColor colorError;
        colorError.setRed(100);
        ui->txtOutput->setTextColor(colorError);
        ui->txtOutput->append("Error. UART is close.");
    }
}

void MainWindow::on_pushButton_5_clicked() //DELETE
{
    QFile file("data.txt");
    ui->textEdit->clear();
    file.remove();
    count_string = 1;
    ui->txtOutput->append("File was delete");
    qDebug() << "File was delete";
}

void MainWindow::led_blink()
{
    static uint8_t f;
    /*if(serial.isOpen() && f == 1)
    {
        ui->label_13->setFixedSize(10,10);
        ui->label_13->setStyleSheet("border-radius: 5px; background-color: green;");
        ui->label_13->setAlignment(Qt::AlignHCenter);
        f = 0;
    }
    else if(f == 0)
    {
        ui->label_13->setFixedSize(10,10);
        ui->label_13->setStyleSheet("border-radius: 5px; background-color: red;");
        ui->label_13->setAlignment(Qt::AlignHCenter);
        f = 1;
    }*/

    if(serial.isOpen())
    {
        ui->label_13->setFixedSize(10,10);
        ui->label_13->setStyleSheet("border-radius: 5px; background-color: green;");
        ui->label_13->setAlignment(Qt::AlignHCenter);
    }
    else
    {
        ui->label_13->setFixedSize(10,10);
        ui->label_13->setStyleSheet("border-radius: 5px; background-color: red;");
        ui->label_13->setAlignment(Qt::AlignHCenter);
    }
}

void MainWindow::UART_ConnectShow()
{
    ui->txtOutput->append("Connect");
}

void MainWindow::on_pushButton_6_clicked()
{
    serial.putChar(static_cast<char>(0xF9)); //START BIT
    serial.putChar(0x5A); //OPEN
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    ui->txtOutput->append("Open gripper");
}

void MainWindow::on_pushButton_7_clicked()
{
    serial.putChar(static_cast<char>(0xF9)); //START BIT
    serial.putChar(0xB4); //CLOSE
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(0x00);
    serial.putChar(static_cast<char>(0xE0)); //STOP BIT

    ui->txtOutput->append("Close gripper");
}
