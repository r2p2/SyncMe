#include <QApplication>
#include "../../../Headers/GDrive/GUI/Forms/SM_GDrive_MainWindow.h"
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SM_GDrive_MainWindow w;

    QRect r(w.geometry());

    r.moveCenter(a.desktop()->availableGeometry().center());
    w.setGeometry(r);

    w.init();
    w.show();

    return a.exec();
}
