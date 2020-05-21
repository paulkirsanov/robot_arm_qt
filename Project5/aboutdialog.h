#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

class QLabel;
class QPushButton;

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    AboutDialog(QWidget *parent = 0);
signals:
    void about(void);
private slots:
    void closeClicked();
private:
    QLabel *label;
    QLabel *label_pic;
    QPushButton *closeButton;
};

#endif // ABOUTDIALOG_H
