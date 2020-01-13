#include "myclient.h"
#include <string>
#include "myclient.h"

MyClient::MyClient(QObject *parent) :
    QObject(parent)
{
}

void MyClient::doConnect(QString message)
{
    socket = new QTcpSocket(this);

    socket->connectToHost(ip, port.toInt());


    if(socket->waitForConnected(5000))
    {
        qDebug() << "Connected!";
        // send
        socket->write(message.toUtf8());
        socket->waitForBytesWritten(1000);

        // close the connection
        socket->close();
    }
    else
    {
        qDebug() << "Not connected!";
    }
}





