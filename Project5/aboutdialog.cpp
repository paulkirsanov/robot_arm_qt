#include "aboutdialog.h"
#include <QtWidgets>

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog (parent)
{
    label = new QLabel(tr("Author: Pavel Kirsanov\r\n"));

    label_pic = new QLabel;
    //label_pic->setGeometry(QRect(0, 0, 5, 5));
    QPixmap pic("://factory.ico");
    QSize PicSize(25, 25);
    pic = pic.scaled(PicSize, Qt::KeepAspectRatio);
    label_pic->setPixmap(pic);
    label_pic->setAlignment(Qt::AlignCenter);

    closeButton = new QPushButton(tr("&Close"));
    closeButton->setEnabled(true);

    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

    QVBoxLayout *leftLayout = new QVBoxLayout;

    leftLayout->addWidget(label_pic);
    leftLayout->addWidget(label);
    leftLayout->addWidget(closeButton);
    leftLayout->setAlignment(Qt::AlignCenter);

    //QVBoxLayout *rightLayout = new QVBoxLayout;

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    //mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    QIcon icon_about;
    QPixmap pic_about("://information.ico");
    icon_about.addPixmap(pic_about);
    setWindowIcon(icon_about);

    setWindowTitle(tr("About"));
    setFixedHeight(sizeHint().height());
    setFixedHeight(sizeHint().width());
    setFixedWidth(160);
    setFixedHeight(150);
}
