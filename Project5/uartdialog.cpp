#include "uartdialog.h"
#include <QtWidgets>
#include <QtSerialPort/QSerialPortInfo>

extern QSerialPort serial;

UARTDialog::UARTDialog(QWidget *parent)
    :QDialog (parent)
{
    label = new QLabel(tr("Serial port: "));
    label_1 = new QLabel(tr("Status: "));
    label_2 = new QLabel("Close");
    label_3 = new QLabel;

    label_3->setFixedSize(10,10);
    label_3->setStyleSheet("border-radius: 5px; background-color: red;");

    openButton = new QPushButton(tr("&Open"));
    openButton->setEnabled(true);

    closeButton = new QPushButton(tr("&Close"));
    closeButton->setEnabled(true);

    comboBox = new QComboBox;

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        comboBox->addItem(info.portName());
    }

    connect(openButton, SIGNAL(clicked()), this, SLOT(openClicked()));
    connect(closeButton, SIGNAL(clicked()), this, SLOT(closeClicked()));
//    connect(&serial, SIGNAL(readyRead()), this, SLOT(serialRecieve()));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(led_blink_uart()));
    timer->start(50);

    QHBoxLayout *topleftLayot = new QHBoxLayout;
    topleftLayot->addWidget(label);
    topleftLayot->addWidget(comboBox);

    QHBoxLayout *downleftLayot = new QHBoxLayout;
    downleftLayot->addWidget(label_1);
    downleftLayot->addWidget(label_2);
    downleftLayot->addWidget(label_3);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(topleftLayot);
    leftLayout->addLayout(downleftLayot);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(openButton);
    rightLayout->addWidget(closeButton);
    rightLayout->addStretch();

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    QIcon icon_uart;
    QPixmap pic_uart("://link.ico");
    icon_uart.addPixmap(pic_uart);
    setWindowIcon(icon_uart);

    setWindowTitle(tr("UART Connect"));
    setFixedHeight(sizeHint().height());
    setFixedWidth(300);
}

void UARTDialog::openClicked()
{
    if(serial.portName() != comboBox->currentText())
    {
        serial.close();
        serial.setPortName(comboBox->currentText());
    }

    serial.setBaudRate(QSerialPort::Baud115200);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);
    serial.open(QSerialPort::ReadWrite);
    if(serial.isOpen())
    {
        label_2->setText("Open");
        label_3->setStyleSheet("border-radius: 5px; background-color: green;");
        emit uartConnect();
    }
}

void UARTDialog::closeClicked()
{
    serial.close();
    if(!serial.isOpen())
    {
        label_2->setText("Close");
        label_3->setStyleSheet("border-radius: 5px; background-color: red;");
    }
}

void UARTDialog::serialRecieve()
{
    ba = serial.readAll();
}

void UARTDialog::led_blink_uart()
{
    if(serial.isOpen())
    {
        label_2->setText("Open");
        label_3->setStyleSheet("border-radius: 5px; background-color: green;");
        label_3->setAlignment(Qt::AlignHCenter);
    }
    else
    {
        label_2->setText("Close");
        label_3->setStyleSheet("border-radius: 5px; background-color: red;");
        label_3->setAlignment(Qt::AlignHCenter);
    }
}
