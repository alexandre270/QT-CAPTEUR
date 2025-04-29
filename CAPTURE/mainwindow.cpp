#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "server.h"
#include "camera.h"
#include <QDebug>
#include <QDateTime>
#include <QScreen>
#include <QGuiApplication>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    client = new Client(this);
    server = new Server(this);
    dbManager = new DBManager(this); // Initialiser DBManager
    dbManager->connectToDatabase("localhost", "mesures_robot", "Utilisateur", "Projet123!"); // Connexion à la base de données
    server->startServer(); // Démarrer le serveur ici

    // Connexion des boutons de l'interface utilisateur
    Camera *camera = new Camera(this);
    connect(ui->startCameraButton, &QPushButton::clicked, camera, &Camera::startCamera);
    connect(ui->stopCameraButton, &QPushButton::clicked, camera, &Camera::stopCamera);
    connect(client, &Client::sensorDataReceived, server, &Server::archiveSensorData); // Connexion mise à jour

    // Initialiser le flux vidéo
    videoStream = new VideoStream("udp://192.168.0.21:1234", this);
    connect(videoStream, &VideoStream::frameReady, this, &MainWindow::updateFrame);
    videoStream->start(); // Démarrer le flux vidéo

    // Connexion du bouton de récupération des données
    connect(ui->fetchButton, &QPushButton::clicked, this, &MainWindow::on_fetchButton_clicked);
    connect(ui->screenshotsListWidget, &QListWidget::itemClicked, this, &MainWindow::on_screenshotsListWidget_itemClicked); // Connexion du clic sur la liste
    connect(ui->moveButton, &QPushButton::clicked, this, &MainWindow::on_moveButton_clicked); // Connexion pour le bouton de mouvement

    // Ajuster la taille de la fenêtre
    this->setMinimumSize(800, 600); // Taille minimale de la fenêtre
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sendButton_clicked()
{
    QString message = ui->messageLineEdit->text(); // Assurez-vous que ce widget existe
    client->sendMessage(message);
    ui->messagesTextEdit->append("Message envoyé: " + message); // Assurez-vous que ce widget existe
}

void MainWindow::on_moveButton_clicked()
{
    QString command = ui->commandLineEdit->text(); // Assurez-vous que ce widget existe
    client->sendMovementCommand(command);
    ui->commandsTextEdit->append("Commande de mouvement envoyée: " + command); // Assurez-vous que ce widget existe
}

void MainWindow::on_captureScreenButton_clicked()
{
    // Capturer l'écran
    QScreen *screen = QGuiApplication::primaryScreen();
    QPixmap screenshot = screen->grabWindow(0);

    // Générer un nom de fichier avec la date et l'heure
    QString timestamp = QDateTime::currentDateTime().toString("yyyyMMdd_HHmmss");
    QString filename = QString("capture_%1.png").arg(timestamp);

    // Sauvegarder la capture d'écran
    screenshot.save(filename);

    // Enregistrer le nom du fichier dans la base de données
    dbManager->insertScreenshot(filename); // Insérer dans la base de données

    // Ajouter le nom du fichier à la liste des captures d'écran
    ui->screenshotsListWidget->addItem(filename);
}

void MainWindow::on_fetchButton_clicked()
{
    QStringList sensorData = dbManager->fetchSensorData(); // Récupérer les données des capteurs
    ui->measurementsTextEdit->clear(); // Effacer les anciennes données

    for (const QString &item : sensorData) {
        ui->measurementsTextEdit->append(item); // Afficher chaque élément dans le QTextEdit
    }
}

void MainWindow::on_screenshotsListWidget_itemClicked(QListWidgetItem *item)
{
    QString filename = item->text();
    QPixmap pixmap(filename);
    QLabel *label = new QLabel();
    label->setPixmap(pixmap);
    label->setWindowTitle(filename);
    label->resize(pixmap.size());
    label->show();
}

void MainWindow::updateFrame(const QImage &image)
{
    ui->videoLabel->setPixmap(QPixmap::fromImage(image)); // Mettre à jour le QLabel avec l'image
}
