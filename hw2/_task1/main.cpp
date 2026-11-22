#include <QCoreApplication>
#include <QSqlDatabase>
#include <QtNetwork/QtNetwork>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QTcpSocket socket;

    return QCoreApplication::exec();
}
