// Cours de Réalité Virtuelle
// leo.donati@univ-cotedazur.fr
//
// PNS 2022-23

#include <QApplication>
#include "widgetopengl.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSurfaceFormat format;
    format.setRenderableType(QSurfaceFormat::OpenGL);
    format.setDepthBufferSize(24);
    format.setVersion(3, 3);          // cible OpenGL 3.3
    format.setProfile(QSurfaceFormat::CoreProfile);
    QSurfaceFormat::setDefaultFormat(format);

    WidgetOpenGL w;
    w.setWindowTitle("Test OpenGL");
    w.show();

    return a.exec();
}
