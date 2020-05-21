#include "aboutdialog.h"
#include <QtWidgets>

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog (parent)
{
    label = new QLabel(tr("About: "));

    label_pic = new QLabel;
    label_pic->setGeometry(QRect(0, 0, 10, 10));
    label_pic->setPixmap(QPixmap("C:/Users/Pavel_K/Documents/Qt/Project 5/Project5/icons.png"));

    closeButton = new QPushButton(tr("&Close"));
    closeButton->setEnabled(true);

    connect(closeButton, SIGNAL(clicked()), this, SLOT(closeClicked()));

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addWidget(label);
    leftLayout->addWidget(closeButton);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(label_pic);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("About"));
    setFixedHeight(sizeHint().height());
    setFixedHeight(sizeHint().width());
    //setFixedWidth(200);
}

void AboutDialog::closeClicked()
{

}
