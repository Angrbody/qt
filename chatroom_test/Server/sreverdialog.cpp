#include "sreverdialog.h"
#include "ui_sreverdialog.h"

SreverDialog::SreverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SreverDialog)
{
    ui->setupUi(this);
    // 客户端向server发送请求时建立一个新的连接信号
    connect(&tcpServer, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    // 每隔三秒产生一个超时符号
    connect(&timer, SIGNAL(timeout()), SLOT(onTimeout()));
    ui->listWidget->setAlternatingRowColors(true);
    ui->listWidget_2->setAlternatingRowColors(true);

    QListWidgetItem *mListItem = new QListWidgetItem("System info",ui->listWidget_2);
    mListItem ->setTextAlignment(Qt::AlignCenter);
    QFont font1 = mListItem->font();//获取控件的font
    font1.setBold(true);//加粗
    mListItem->setFont(font1);

    QListWidgetItem *mListItem2 = new QListWidgetItem("message list",ui->listWidget);
    mListItem2 ->setTextAlignment(Qt::AlignCenter);
    QFont font2 = mListItem2->font();//获取控件的font
    font2.setBold(true);//加粗
    mListItem2->setFont(font2);

//    ui->listWidget->setItemAlignment(Qt::AlignRight);
//    ui->listWidget->setAlignment(Qt::AlignRight);
}
//析构函数
SreverDialog::~SreverDialog()
{
    delete ui;
}

// create server button触发函数
void SreverDialog::on_pushButton_clicked()
{
    QString curtime;    //当前时间

    port = ui->lineEdit->text().toShort();  //获取server port
    // 设置server ip 和 port
    if (tcpServer.listen(QHostAddress::Any, port) == true){
        qDebug()<<"create server sucessfully!";
        //获取当前时间
        curtime = QDateTime::currentDateTime().toString("HH:mm:ss");
        //系统通知显示
        QListWidgetItem *mListItem = new QListWidgetItem(curtime,ui->listWidget_2);
        mListItem ->setTextAlignment(Qt::AlignCenter);
        mListItem ->setForeground(Qt::blue);


        ui->listWidget_2->addItem("Create Successfully!");
        ui->listWidget_2->addItem("waiting for the clients...");
        //使建立server按钮保持false状态
        ui->pushButton->setEnabled(false);
        ui->lineEdit->setEnabled(false);
    }
    else {
        qDebug()<< "faied to create server.";
    }
}

// slot func of corresponding the client connection request
void SreverDialog::onNewConnection(){
    // get the socket of communicating with the client
    QTcpSocket* tcpClient = tcpServer.nextPendingConnection();
    // save socket to vector
    tcpClientList.append(tcpClient);
    // when a client sent a message to server, soket send readyRead() signal
    connect(tcpClient, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

// slot func of receiving the client message
void SreverDialog::onReadyRead(){
    //
    QString curtime;
    for(int i=0; i<tcpClientList.size(); i++){
        // 遍历容器找到是哪个客户端发来的消息
        // bytesAvailable()获取当前套接字等待读取消息字节数
        // 返回0表示没有消息需要读，大于0说明有消息要来
        if(tcpClientList.at(i)->bytesAvailable()){
            // read message and save it
            QByteArray buf = tcpClientList.at(i)->readAll();
            // display message
            curtime = QDateTime::currentDateTime().toString("HH:mm:ss");
            QListWidgetItem *mListItem = new QListWidgetItem(curtime,ui->listWidget);
            mListItem ->setTextAlignment(Qt::AlignCenter);
            mListItem ->setForeground(Qt::blue);
//            ui->listWidget->addItem(buf);
//            buf->setTextAlignment(Qt::AlignRight);
            QListWidgetItem *myListItem = new QListWidgetItem(buf,ui->listWidget);
            myListItem ->setTextAlignment(Qt::AlignLeft);

            ui->listWidget->scrollToBottom();

            // start timer
            timer.start(3000);
            // forward message to other client
            sendMessge(buf);
        }
    }
}
// slot func of forwording the message to other client
void SreverDialog::sendMessge(const QByteArray& buf){
    for(int i =0; i<tcpClientList.size(); i++) {
        tcpClientList.at(i)->write(buf);
    }
}

// slot func of timer
void SreverDialog::onTimeout(void){
    qDebug()<<"timer test";
    // 遍历检查容器中保存的客户端通信套接字是否已经断开连接，如果是则删除
    for(int i=0; i<tcpClientList.size(); i++){
        if(tcpClientList.at(i)->state() ==
                QAbstractSocket::UnconnectedState){
            tcpClientList.removeAt(i);
            --i;
        }
    }
}
