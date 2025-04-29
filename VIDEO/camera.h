#ifndef CAMERA_H
#define CAMERA_H

#include <QObject>

class Camera : public QObject
{
    Q_OBJECT
public:
    explicit Camera(QObject *parent = nullptr);

public slots:
    void startCamera();
    void stopCamera();
};

#endif // CAMERA_H
