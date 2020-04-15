#include "onlinecustomer.h"

onlinecustomer::onlinecustomer(QWidget *parent) : QWidget (parent)
{
    QVBoxLayout *qOnlineCustomVBoxLayout = new QVBoxLayout(this);//总的垂直布局
    QLabel *qShowPicture = new QLabel();
    QPixmap qPeoplePhoto(":/images/user.png");
    qShowPicture->setPixmap(qPeoplePhoto);
    qOnlineCustomVBoxLayout->addWidget(qShowPicture);

    DTextBrowser *dChatBox = new DTextBrowser();
    dChatBox->setReadOnly(true);
    dChatBox->setOpenLinks(true);
    dChatBox->append(tr("<style> a {text-decoration: none} </style> <a href=\"https://i.csdn.net/#/uc/profile\">显示更多聊天内容"));
    qOnlineCustomVBoxLayout->addWidget(dChatBox);

    QLabel *qFilePicture = new QLabel();
    QPixmap qFIlePhoto(":/images/file.svg");
    qFilePicture->setPixmap(qFIlePhoto);
    qOnlineCustomVBoxLayout->addWidget(qFilePicture);

    DTextEdit *dChatDTextEdit = new DTextEdit();
    dChatDTextEdit->setText("很高兴为您服务");
    qOnlineCustomVBoxLayout->addWidget(dChatDTextEdit);

    QLabel *qPutEnterSendLabel = new QLabel();
    qPutEnterSendLabel->setText("按回车发送");
    qPutEnterSendLabel->setAlignment(Qt::AlignRight);
    qOnlineCustomVBoxLayout->addWidget(qPutEnterSendLabel);
    //QInputDialog

}
onlinecustomer :: ~onlinecustomer()
{

}
