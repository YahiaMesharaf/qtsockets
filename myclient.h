#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QtWidgets/QLabel>


class MyClient : public QObject
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = 0);

    void doConnect(QString statusLabel);
    QString ip;
    QString port;

signals:

public slots:

private:
    QTcpSocket *socket;


};

#endif // MYTCPSOCKET_H
