#include <QCoreApplication>
#include <QProcess>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QProcess *proses = new QProcess();
    QString program = "D:/tes.bat";

    proses->start(program);
    proses->waitForFinished();

    QString result = proses ->readAllStandardOutput();
    QStringList list_result = result.split("\r\n");
    qDebug()<<list_result.at(2);

}
