#include "camera.h"
#include <QDebug>

Camera::Camera(QObject *parent) : QObject(parent)
{
}

void Camera::startCamera()
{
    // Code pour démarrer la caméra
    qDebug() << "Caméra démarrée";
}

void Camera::stopCamera()
{
    // Code pour arrêter la caméra
    qDebug() << "Caméra arrêtée";
}
