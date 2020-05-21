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
    QFrame *line_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QPushButton *rightButton_3;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_2;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_8;
    QTextEdit *txtOutput;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_4;
    QGridLayout *gridLayout_3;
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
    QTextEdit *textEdit;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
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
        icon.addFile(QStringLiteral(":/icons.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons.ico"), QSize(), QIcon::Normal, QIcon::On);
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
        layoutWidget->setGeometry(QRect(10, 0, 981, 211));
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


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(horizontalLayout_5);

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


        verticalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_8);

        line_6 = new QFrame(layoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setLayoutDirection(Qt::LeftToRight);
        lineEdit_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_5);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        verticalLayout->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(layoutWidget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        verticalLayout->addWidget(comboBox_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setLayoutDirection(Qt::LeftToRight);
        lineEdit_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_6);

        comboBox_6 = new QComboBox(layoutWidget);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_6->sizePolicy().hasHeightForWidth());
        comboBox_6->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(comboBox_6);

        comboBox_7 = new QComboBox(layoutWidget);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));

        verticalLayout_2->addWidget(comboBox_7);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        rightButton_3 = new QPushButton(layoutWidget);
        rightButton_3->setObjectName(QStringLiteral("rightButton_3"));
        rightButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(182,189,184);\n"
"	color:while;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #9C978B, stop: 1 #7A7466);\n"
"}"));

        verticalLayout_3->addWidget(rightButton_3);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(layoutWidget);
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

        gridLayout->addWidget(pushButton, 0, 0, 2, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 3, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 1, 3, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 1, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_6->addLayout(verticalLayout_3);

        txtOutput = new QTextEdit(layoutWidget);
        txtOutput->setObjectName(QStringLiteral("txtOutput"));

        horizontalLayout_6->addWidget(txtOutput);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 220, 981, 251));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
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

        gridLayout_5->addWidget(pushButton_4, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
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

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_3->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
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


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 2, 1, 1, 1);

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
        leftButton->setText(QApplication::translate("MainWindow", "Right", nullptr));
        rightButton->setText(QApplication::translate("MainWindow", "Left", nullptr));
        label->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Driver 2", nullptr));
        leftButton_2->setText(QApplication::translate("MainWindow", "Open", nullptr));
        rightButton_2->setText(QApplication::translate("MainWindow", "Close", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Driver 1", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Driver 2", nullptr));
        rightButton_3->setText(QApplication::translate("MainWindow", "Send", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QString());
        label_12->setText(QString());
        label_9->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Read", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Write", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
