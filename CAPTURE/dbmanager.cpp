#include "dbmanager.h"

DBManager::DBManager(QObject *parent) : QObject(parent)
{
    // Constructeur
}

DBManager::~DBManager()
{
    disconnectFromDatabase(); // Déconnexion à la base de données lors de la destruction
}

bool DBManager::connectToDatabase(const QString &host, const QString &databaseName, const QString &user, const QString &password)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(host);
    db.setDatabaseName(databaseName);
    db.setUserName(user);
    db.setPassword(password);

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données:" << db.lastError().text();
        return false; // Échec de la connexion
    }
    qDebug() << "Connexion à la base de données réussie.";
    return true; // Connexion réussie
}

void DBManager::disconnectFromDatabase()
{
    if (db.isOpen()) {
        db.close();
        qDebug() << "Déconnexion de la base de données.";
    }
}

QStringList DBManager::fetchSensorData() {
    QStringList dataList;
    QSqlQuery query("SELECT type_capteur, valeur FROM mesures");

    while (query.next()) {
        QString typeCapteur = query.value("type_capteur").toString();
        float valeur = query.value("valeur").toFloat();
        dataList.append(QString("%1: %2").arg(typeCapteur).arg(valeur));
    }
    return dataList;
}

bool DBManager::insertScreenshot(const QString &filename) {
    QSqlQuery query;
    query.prepare("INSERT INTO captures (filename) VALUES (:filename)");
    query.bindValue(":filename", filename);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'insertion de la capture d'écran:" << query.lastError().text();
        return false; // Échec de l'insertion
    }
    return true; // Insertion réussie
}
