#ifndef UARTDIALOG_H
#define UARTDIALOG_H

#include <QDialog>
#include <QSerialPort>

class QLabel;
class QComboBox;
class QPushButton;

class UARTDialog : public QDialog
{
    Q_OBJECT

public:
    UARTDialog(QWidget *parent = 0);
    QByteArray ba;
signals:
    void uartConnect(void);
    void statusUART(void);
private slots:
    void openClicked();
    void closeClicked();
    void serialRecieve();
private:
    QLabel *label;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *openButton;
    QPushButton *closeButton;
};

#endif // UARTDIALOG_H
