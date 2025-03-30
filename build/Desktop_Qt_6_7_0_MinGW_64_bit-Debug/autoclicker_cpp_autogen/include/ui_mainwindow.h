/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startButton;
    QPushButton *stopButton;
    QGroupBox *CPS_container;
    QCheckBox *CPS_CheckBox;
    QSpinBox *CPS_SpinBox;
    QLabel *CPS_text1;
    QLabel *CPS_text2;
    QGroupBox *CPLMB_container;
    QCheckBox *CPLMB_CheckBox;
    QSpinBox *CPLMB_SpinBox;
    QLabel *CPLMB_text1;
    QLabel *CPLMB_text2;
    QGroupBox *HFC_container;
    QCheckBox *HFC_CheckBox;
    QSpinBox *HFC_SpinBox;
    QLabel *HFC_text1;
    QLabel *HFC_text2;
    QGroupBox *label_container;
    QLabel *statusLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(597, 222);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(90, 160, 111, 41));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(230, 160, 111, 41));
        CPS_container = new QGroupBox(centralwidget);
        CPS_container->setObjectName("CPS_container");
        CPS_container->setGeometry(QRect(10, 10, 171, 131));
        CPS_CheckBox = new QCheckBox(CPS_container);
        CPS_CheckBox->setObjectName("CPS_CheckBox");
        CPS_CheckBox->setGeometry(QRect(10, 30, 91, 22));
        CPS_SpinBox = new QSpinBox(CPS_container);
        CPS_SpinBox->setObjectName("CPS_SpinBox");
        CPS_SpinBox->setGeometry(QRect(80, 80, 71, 25));
        CPS_text1 = new QLabel(CPS_container);
        CPS_text1->setObjectName("CPS_text1");
        CPS_text1->setGeometry(QRect(10, 80, 61, 16));
        CPS_text2 = new QLabel(CPS_container);
        CPS_text2->setObjectName("CPS_text2");
        CPS_text2->setGeometry(QRect(10, 90, 61, 16));
        CPLMB_container = new QGroupBox(centralwidget);
        CPLMB_container->setObjectName("CPLMB_container");
        CPLMB_container->setGeometry(QRect(200, 10, 181, 131));
        CPLMB_CheckBox = new QCheckBox(CPLMB_container);
        CPLMB_CheckBox->setObjectName("CPLMB_CheckBox");
        CPLMB_CheckBox->setGeometry(QRect(10, 30, 111, 22));
        CPLMB_SpinBox = new QSpinBox(CPLMB_container);
        CPLMB_SpinBox->setObjectName("CPLMB_SpinBox");
        CPLMB_SpinBox->setGeometry(QRect(100, 80, 71, 25));
        CPLMB_text1 = new QLabel(CPLMB_container);
        CPLMB_text1->setObjectName("CPLMB_text1");
        CPLMB_text1->setGeometry(QRect(10, 80, 81, 16));
        CPLMB_text2 = new QLabel(CPLMB_container);
        CPLMB_text2->setObjectName("CPLMB_text2");
        CPLMB_text2->setGeometry(QRect(10, 90, 81, 20));
        HFC_container = new QGroupBox(centralwidget);
        HFC_container->setObjectName("HFC_container");
        HFC_container->setGeometry(QRect(400, 10, 181, 131));
        HFC_CheckBox = new QCheckBox(HFC_container);
        HFC_CheckBox->setObjectName("HFC_CheckBox");
        HFC_CheckBox->setGeometry(QRect(10, 30, 111, 22));
        HFC_SpinBox = new QSpinBox(HFC_container);
        HFC_SpinBox->setObjectName("HFC_SpinBox");
        HFC_SpinBox->setGeometry(QRect(100, 80, 71, 25));
        HFC_text1 = new QLabel(HFC_container);
        HFC_text1->setObjectName("HFC_text1");
        HFC_text1->setGeometry(QRect(10, 80, 81, 16));
        HFC_text2 = new QLabel(HFC_container);
        HFC_text2->setObjectName("HFC_text2");
        HFC_text2->setGeometry(QRect(10, 90, 81, 20));
        label_container = new QGroupBox(centralwidget);
        label_container->setObjectName("label_container");
        label_container->setGeometry(QRect(380, 150, 141, 51));
        statusLabel = new QLabel(label_container);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(20, 20, 71, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        CPS_container->setTitle(QCoreApplication::translate("MainWindow", "Clicks Per Second", nullptr));
        CPS_CheckBox->setText(QCoreApplication::translate("MainWindow", "Enable CPS", nullptr));
        CPS_text1->setText(QCoreApplication::translate("MainWindow", "Set mouse", nullptr));
        CPS_text2->setText(QCoreApplication::translate("MainWindow", "clicking to", nullptr));
        CPLMB_container->setTitle(QCoreApplication::translate("MainWindow", "Clicks Per LMB", nullptr));
        CPLMB_CheckBox->setText(QCoreApplication::translate("MainWindow", "Enable CP-LMB", nullptr));
        CPLMB_text1->setText(QCoreApplication::translate("MainWindow", "Number of", nullptr));
        CPLMB_text2->setText(QCoreApplication::translate("MainWindow", "clicks per LMB", nullptr));
        HFC_container->setTitle(QCoreApplication::translate("MainWindow", "Hold for Clicks", nullptr));
        HFC_CheckBox->setText(QCoreApplication::translate("MainWindow", "Enable HFC", nullptr));
        HFC_text1->setText(QCoreApplication::translate("MainWindow", "Number of cps", nullptr));
        HFC_text2->setText(QCoreApplication::translate("MainWindow", "during hold", nullptr));
        label_container->setTitle(QCoreApplication::translate("MainWindow", "Status", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "in-active", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
