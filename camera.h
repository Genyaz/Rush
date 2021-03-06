#ifndef CAMERA_H
#define CAMERA_H

#include <QMatrix>

class Camera
{
public:
    static Camera* getInstance();
    int width;
    int height;
    QMatrix* getMatrix();
private:
    Camera();
    QMatrix* matrix;
    static Camera* instance;
};

#endif // CAMERA_H
