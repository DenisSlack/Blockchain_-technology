#include <QApplication>
#include <enter.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Enter w;
    w.show();
    return a.exec();
}
