/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *videoLabel;
    QGroupBox *groupBoxMessages;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *messageLineEdit;
    QPushButton *sendButton;
    QTextEdit *messagesTextEdit;
    QGroupBox *groupBoxCommands;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *commandLineEdit;
    QPushButton *moveButton;
    QTextEdit *commandsTextEdit;
    QGroupBox *groupBoxActions;
    QVBoxLayout *verticalLayout_4;
    QPushButton *captureScreenButton;
    QPushButton *sendGasButton;
    QTextEdit *measurementsTextEdit;
    QPushButton *fetchButton;
    QGroupBox *groupBoxScreenshots;
    QVBoxLayout *verticalLayout_5;
    QListWidget *screenshotsListWidget;
    QGroupBox *groupBoxCamera;
    QHBoxLayout *horizontalLayout;
    QPushButton *startCameraButton;
    QPushButton *stopCameraButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        videoLabel = new QLabel(centralwidget);
        videoLabel->setObjectName(QString::fromUtf8("videoLabel"));
        videoLabel->setMinimumSize(QSize(640, 480));

        verticalLayout->addWidget(videoLabel);

        groupBoxMessages = new QGroupBox(centralwidget);
        groupBoxMessages->setObjectName(QString::fromUtf8("groupBoxMessages"));
        verticalLayout_2 = new QVBoxLayout(groupBoxMessages);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        messageLineEdit = new QLineEdit(groupBoxMessages);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));

        verticalLayout_2->addWidget(messageLineEdit);

        sendButton = new QPushButton(groupBoxMessages);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        verticalLayout_2->addWidget(sendButton);

        messagesTextEdit = new QTextEdit(groupBoxMessages);
        messagesTextEdit->setObjectName(QString::fromUtf8("messagesTextEdit"));
        messagesTextEdit->setReadOnly(true);

        verticalLayout_2->addWidget(messagesTextEdit);


        verticalLayout->addWidget(groupBoxMessages);

        groupBoxCommands = new QGroupBox(centralwidget);
        groupBoxCommands->setObjectName(QString::fromUtf8("groupBoxCommands"));
        verticalLayout_3 = new QVBoxLayout(groupBoxCommands);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        commandLineEdit = new QLineEdit(groupBoxCommands);
        commandLineEdit->setObjectName(QString::fromUtf8("commandLineEdit"));

        verticalLayout_3->addWidget(commandLineEdit);

        moveButton = new QPushButton(groupBoxCommands);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));

        verticalLayout_3->addWidget(moveButton);

        commandsTextEdit = new QTextEdit(groupBoxCommands);
        commandsTextEdit->setObjectName(QString::fromUtf8("commandsTextEdit"));
        commandsTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(commandsTextEdit);


        verticalLayout->addWidget(groupBoxCommands);

        groupBoxActions = new QGroupBox(centralwidget);
        groupBoxActions->setObjectName(QString::fromUtf8("groupBoxActions"));
        verticalLayout_4 = new QVBoxLayout(groupBoxActions);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        captureScreenButton = new QPushButton(groupBoxActions);
        captureScreenButton->setObjectName(QString::fromUtf8("captureScreenButton"));

        verticalLayout_4->addWidget(captureScreenButton);

        sendGasButton = new QPushButton(groupBoxActions);
        sendGasButton->setObjectName(QString::fromUtf8("sendGasButton"));

        verticalLayout_4->addWidget(sendGasButton);

        measurementsTextEdit = new QTextEdit(groupBoxActions);
        measurementsTextEdit->setObjectName(QString::fromUtf8("measurementsTextEdit"));
        measurementsTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(measurementsTextEdit);

        fetchButton = new QPushButton(groupBoxActions);
        fetchButton->setObjectName(QString::fromUtf8("fetchButton"));

        verticalLayout_4->addWidget(fetchButton);


        verticalLayout->addWidget(groupBoxActions);

        groupBoxScreenshots = new QGroupBox(centralwidget);
        groupBoxScreenshots->setObjectName(QString::fromUtf8("groupBoxScreenshots"));
        verticalLayout_5 = new QVBoxLayout(groupBoxScreenshots);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        screenshotsListWidget = new QListWidget(groupBoxScreenshots);
        screenshotsListWidget->setObjectName(QString::fromUtf8("screenshotsListWidget"));
        screenshotsListWidget->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout_5->addWidget(screenshotsListWidget);


        verticalLayout->addWidget(groupBoxScreenshots);

        groupBoxCamera = new QGroupBox(centralwidget);
        groupBoxCamera->setObjectName(QString::fromUtf8("groupBoxCamera"));
        horizontalLayout = new QHBoxLayout(groupBoxCamera);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startCameraButton = new QPushButton(groupBoxCamera);
        startCameraButton->setObjectName(QString::fromUtf8("startCameraButton"));

        horizontalLayout->addWidget(startCameraButton);

        stopCameraButton = new QPushButton(groupBoxCamera);
        stopCameraButton->setObjectName(QString::fromUtf8("stopCameraButton"));

        horizontalLayout->addWidget(stopCameraButton);


        verticalLayout->addWidget(groupBoxCamera);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mon Application", nullptr));
        videoLabel->setText(QCoreApplication::translate("MainWindow", "Flux Vid\303\251o", nullptr));
        groupBoxMessages->setTitle(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        messageLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre message ici", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "Envoyer Message", nullptr));
        groupBoxCommands->setTitle(QCoreApplication::translate("MainWindow", "Commandes", nullptr));
        commandLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre commande de mouvement ici", nullptr));
        moveButton->setText(QCoreApplication::translate("MainWindow", "Envoyer Commande de Mouvement", nullptr));
        groupBoxActions->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        captureScreenButton->setText(QCoreApplication::translate("MainWindow", "Capturer \303\211cran", nullptr));
        sendGasButton->setText(QCoreApplication::translate("MainWindow", "Envoyer les Donn\303\251es", nullptr));
        fetchButton->setText(QCoreApplication::translate("MainWindow", "R\303\251cup\303\251rer Donn\303\251es", nullptr));
        groupBoxScreenshots->setTitle(QCoreApplication::translate("MainWindow", "Captures d'\303\211cran", nullptr));
        groupBoxCamera->setTitle(QCoreApplication::translate("MainWindow", "Cam\303\251ra", nullptr));
        startCameraButton->setText(QCoreApplication::translate("MainWindow", "D\303\251marrer Cam\303\251ra", nullptr));
        stopCameraButton->setText(QCoreApplication::translate("MainWindow", "Arr\303\252ter Cam\303\251ra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
