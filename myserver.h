#ifndef MYSERVER_H
#define MYSERVER_H

//#include <QtNetwork/QTcpSocket>
//#include <QtNetwork/QTcpServer>
#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class MyServer : public QObject
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = 0);

signals:

public slots:
    void newConnection();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();

private:
    QTcpServer *server;
    QTcpSocket *socket;

};

#endif // MYSERVER_H
