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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_2;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_4;
    QCheckBox *checkBox_4;
    QSpinBox *spinBox_4;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QLabel *label_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(597, 222);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 160, 111, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 160, 111, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(150, 160, 111, 41));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 171, 131));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 30, 91, 22));
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(80, 80, 71, 25));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 80, 61, 16));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 90, 61, 16));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(200, 10, 181, 131));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(10, 30, 111, 22));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(100, 80, 71, 25));
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 80, 81, 16));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 81, 20));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(400, 10, 181, 131));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(10, 30, 111, 22));
        spinBox_4 = new QSpinBox(groupBox_4);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setGeometry(QRect(100, 80, 71, 25));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 80, 81, 16));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 90, 81, 20));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(430, 150, 141, 51));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 20, 71, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Set Click Location", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Clicks Per Second", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Enable CPS", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Set mouse", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "clicking to", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Clicks Per LMB", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Enable CP-LMB", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number of", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "clicks per LMB", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Hold for Clicks", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Enable HFC", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Number of cps", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "during hold", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "in-active", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
