// myserver.cpp

#include "myserver.h"
extern "C" {
#include <wiringPi.h>
}
#include <stdio.h>
#include <stdlib.h>

MyServer::MyServer(QObject *parent) :
    QObject(parent)
{
    server = new QTcpServer(this);

    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    wiringPiSetup();
    pinMode(LED, OUTPUT);
    if(!server->listen(QHostAddress::Any, 1234))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started!";
    }
}
void MyServer::newConnection()
{
    socket = server->nextPendingConnection();
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));

    QString address = socket->peerAddress().toString();
    QString message = "Hi " + address + " from the server!";

    socket->write(message.toUtf8());
    socket->flush();

    socket->waitForBytesWritten(3000);
}

void MyServer::disconnected()
{
    qDebug() << "disconnected...";
}

void MyServer::bytesWritten(qint64 bytes)
{
    qDebug() << bytes << " bytes written...";
}

void MyServer::readyRead()
{
    qDebug() << "reading...";

    QByteArray message = socket->readAll();

    // read the data from the socket
    qDebug() << message;
    if(message == "on"){
	digitalWrite (LED, HIGH) ;
    }else if(message == "off"){
	digitalWrite (LED, LOW) ;
    }
    socket->write("Server read: " + message);
}
