/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_2;
    QPushButton *leftButton;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit;
    QPushButton *rightButton;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_14;
    QFrame *line_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_4;
    QPushButton *leftButton_2;
    QComboBox *comboBox_3;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_3;
    QPushButton *rightButton_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider_2;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_6;
    QFrame *line_4;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_7;
    QFrame *line_6;
    QTextEdit *txtOutput;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_7;
    QComboBox *comboBox_9;
    QComboBox *comboBox_10;
    QLineEdit *lineEdit_8;
    QComboBox *comboBox_8;
    QComboBox *comboBox_11;
    QLineEdit *lineEdit_9;
    QComboBox *comboBox;
    QComboBox *comboBox_12;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label_13;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1000, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 500));
        MainWindow->setMaximumSize(QSize(1000, 500));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral("factory.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/factory.ico"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QStringLiteral(":/factory.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QStringLiteral(":/factory.ico"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QStringLiteral(":/factory.ico"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QStringLiteral(":/factory.ico"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QStringLiteral(":/factory.ico"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QStringLiteral(":/factory.ico"), QSize(), QIcon::Selected, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255,151,57);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        MainWindow->setAnimated(false);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(true);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 981, 298));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lineEdit_2);

        leftButton = new QPushButton(layoutWidget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        verticalLayout_4->addWidget(leftButton);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_4->addWidget(comboBox_2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lineEdit);

        rightButton = new QPushButton(layoutWidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        verticalLayout_5->addWidget(rightButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setPageStep(8);
        horizontalSlider->setValue(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickInterval(0);

        horizontalLayout_3->addWidget(horizontalSlider);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(horizontalLayout_5);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_14);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_4);

        leftButton_2 = new QPushButton(layoutWidget);
        leftButton_2->setObjectName(QStringLiteral("leftButton_2"));
        leftButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        verticalLayout_6->addWidget(leftButton_2);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        verticalLayout_6->addWidget(comboBox_3);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setLayoutDirection(Qt::LeftToRight);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lineEdit_3);

        rightButton_2 = new QPushButton(layoutWidget);
        rightButton_2->setObjectName(QStringLiteral("rightButton_2"));
        rightButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        verticalLayout_7->addWidget(rightButton_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setPageStep(8);
        horizontalSlider_2->setValue(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickInterval(0);

        horizontalLayout_2->addWidget(horizontalSlider_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_9);


        verticalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_6);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_4);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_15);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_9->addWidget(pushButton_6);


        horizontalLayout_9->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_10->addWidget(pushButton_7);


        horizontalLayout_9->addLayout(verticalLayout_10);


        verticalLayout_8->addLayout(horizontalLayout_9);


        horizontalLayout_6->addLayout(verticalLayout_8);

        line_6 = new QFrame(layoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_6);

        txtOutput = new QTextEdit(layoutWidget);
        txtOutput->setObjectName(QStringLiteral("txtOutput"));

        horizontalLayout_6->addWidget(txtOutput);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 310, 981, 161));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        gridLayout_2->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 6, 4, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_3->addWidget(textEdit, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lineEdit_7);

        comboBox_9 = new QComboBox(layoutWidget1);
        comboBox_9->setObjectName(QStringLiteral("comboBox_9"));

        horizontalLayout_8->addWidget(comboBox_9);

        comboBox_10 = new QComboBox(layoutWidget1);
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));

        horizontalLayout_8->addWidget(comboBox_10);

        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lineEdit_8);

        comboBox_8 = new QComboBox(layoutWidget1);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));

        horizontalLayout_8->addWidget(comboBox_8);

        comboBox_11 = new QComboBox(layoutWidget1);
        comboBox_11->setObjectName(QStringLiteral("comboBox_11"));

        horizontalLayout_8->addWidget(comboBox_11);

        lineEdit_9 = new QLineEdit(layoutWidget1);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lineEdit_9);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_8->addWidget(comboBox);

        comboBox_12 = new QComboBox(layoutWidget1);
        comboBox_12->setObjectName(QStringLiteral("comboBox_12"));

        horizontalLayout_8->addWidget(comboBox_12);


        gridLayout_3->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 4, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        gridLayout_4->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        gridLayout_4->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        gridLayout_4->addWidget(pushButton_2, 0, 0, 1, 1);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 0, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 5, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 20));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Control", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Driver 1", nullptr));
        leftButton->setText(QApplication::translate("MainWindow", "Up", nullptr));
        rightButton->setText(QApplication::translate("MainWindow", "Down", nullptr));
        label->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QString());
        label_14->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Driver 2", nullptr));
        leftButton_2->setText(QApplication::translate("MainWindow", "Right", nullptr));
        rightButton_2->setText(QApplication::translate("MainWindow", "Left", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_9->setText(QString());
        label_6->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "Gripper", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Open", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Close", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Read", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Write", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
