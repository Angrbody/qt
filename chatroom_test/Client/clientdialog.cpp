#include "clientdialog.h"
#include "ui_clientdialog.h"
//client类实现
ClientDialog::ClientDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientDialog)
{
    status = false;     //维护一个用户登录的状态，false = 用户未与server连接
    ui->setupUi(this);
    //这里使用connect槽函数，为后面的实现铺垫
    connect(&tcpSocket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(&tcpSocket, SIGNAL(disconnected()), this, SLOT(disConnected()));
    connect(&tcpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(&tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(onError()));
    //设置listWidget每行自动更换颜色，以区分消息发送时间和内容
    QListWidgetItem *mListItem = new QListWidgetItem("message list",ui->listWidget);
    mListItem ->setTextAlignment(Qt::AlignCenter);
    QFont font1 = mListItem->font();//获取控件的font
    font1.setBold(true);//加粗
    mListItem->setFont(font1);

    ui->listWidget->setAlternatingRowColors(true);
}

ClientDialog::~ClientDialog()
{
    delete ui;   //析构
}

//send按钮的功能实现
void ClientDialog::on_sendButton_clicked()
{
    //获得用户输入的文字
    QString msg = ui->messageEdit->text();
    if(msg == ""){
     return;
    }
    msg = username + ": " + msg;
    //发送消息
    tcpSocket.write(msg.toUtf8());
    //clear
    ui->messageEdit->clear();
}

//connect按钮的功能实现
void ClientDialog::on_connectButton_clicked()
{
    // if offline, connect to server
    if (status == false){
        // get server ip
        serverIp.setAddress(ui->serverIpEdit->text());
        // get server port
        serverPort = ui->serverPortEdit->text().toShort();
        // get username
        username = ui->usernameEdit->text();
        // send connection request
        // if success, generate connected singal, else generate error singal
        tcpSocket.connectToHost(serverIp, serverPort);
    }
    // if online, disconnect from server
    else {
        // send server with message that leaving chat room
        QString msg = username + ": leaved!";
        tcpSocket.write(msg.toUtf8());
        // disconnect from server, and generate disconnected singal
        tcpSocket.disconnectFromHost();
    }
}

// slot func for successful connection with server (connected())
void ClientDialog::onConnected()
{
    //确认连接状态以及各按钮的状态
    status = true;
    ui->sendButton->setEnabled(true);
    ui->serverIpEdit->setEnabled(false);
    ui->serverPortEdit->setEnabled(false);
    ui->usernameEdit->setEnabled(false);
    ui->connectButton->setText("leave chat room");
    // send message to server
    QString msg = username  + ": entered the chat room!";
    // toUtf8(): transform QString to QByteArray
    tcpSocket.write(msg.toUtf8());
}

// slot func for disconnection with server
void ClientDialog::disConnected()
{
    status = false;
    ui->sendButton->setEnabled(true);
    ui->serverIpEdit->setEnabled(true);
    ui->serverPortEdit->setEnabled(true);
    ui->usernameEdit->setEnabled(true);
    ui->connectButton->setText("connect server");
}

// slot fucn of receive message from server
void ClientDialog::onReadyRead()
{
    QString curtime;
    QString timeinfo;
    if(tcpSocket.bytesAvailable()){
        // 时间戳
        curtime = QDateTime::currentDateTime().toString("HH:mm:ss");
        QListWidgetItem *mListItem = new QListWidgetItem(curtime,ui->listWidget);
        mListItem ->setTextAlignment(Qt::AlignCenter);
        mListItem ->setForeground(Qt::blue);
        // 接收message
        QByteArray buf = tcpSocket.readAll();
        ui->listWidget->addItem(buf);
        // 将消息列表拉至最下端
        ui->listWidget->scrollToBottom();
    }
}

// slot fucn of network exception
void ClientDialog::onError()
{
    // errorString(): get reason of network exception
    QMessageBox::critical(this, "ERROR", tcpSocket.errorString());
}
