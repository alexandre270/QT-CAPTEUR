#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QLabel>
#include <QListWidget>
#include <QListWidgetItem>
#include "client.h"
#include "server.h"
#include "camera.h"
#include "videostream.h"
#include "dbmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sendButton_clicked();
    void on_moveButton_clicked();
    void on_captureScreenButton_clicked();
    void on_fetchButton_clicked();
    void on_screenshotsListWidget_itemClicked(QListWidgetItem *item);
    void updateFrame(const QImage &image);

private:
    Ui::MainWindow *ui;
    Client *client;
    Server *server;
    DBManager *dbManager;
    VideoStream *videoStream;
};

#endif // MAINWINDOW_H
