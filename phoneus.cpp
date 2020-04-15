#include "phoneus.h"

phoneus::phoneus(QWidget *parent) : QWidget (parent)
{
    QVBoxLayout *qConnectUSVBoxLayout = new QVBoxLayout(this);//总的垂直布局

    DFrame *fConnectUSFrameone = new DFrame();//第一个frame
    QVBoxLayout *qFrameChildVBoxLayout = new QVBoxLayout(this);//子垂直分布

    QLabel *qPhoneUSDescrib = new QLabel();

    qPhoneUSDescrib->setText("               在下方选择您要咨询的类别后，将展示相匹配的服务与支持团队成员联系方式，您可以通过电话、"
                             "邮件或使用您的微信，扫描右侧成员企业微信号二维码，添加好友，通过移动网络寻求在线一对一咨询服务。");
    qPhoneUSDescrib->setWordWrap(true);
    qFrameChildVBoxLayout->addWidget(qPhoneUSDescrib);
    QFont qSetWordSize;
    qSetWordSize.setPointSize(9);
    qPhoneUSDescrib->setFont(qSetWordSize);

    QHBoxLayout *qDCombBoxHBoxLayout = new QHBoxLayout();//选项框的水平布局
    DComboBox *pDComboBoxone = new DComboBox();
    pDComboBoxone->setFixedWidth(200);
    pDComboBoxone->addItem(tr("桌面"));
    pDComboBoxone->addItem(tr("任务栏"));
    pDComboBoxone->addItem(tr("开始与启动器"));
    pDComboBoxone->addItem(tr("窗口管理器"));
    pDComboBoxone->addItem(tr("系统激活"));
    pDComboBoxone->addItem(tr("开发者模式"));
    pDComboBoxone->addItem(tr("UOS ID"));
    pDComboBoxone->addItem(tr("其它"));
    qDCombBoxHBoxLayout->addWidget(pDComboBoxone);
    qFrameChildVBoxLayout->addLayout(qDCombBoxHBoxLayout);
    //fConnectUSFrameone->setLayout(qDCombBoxHBoxLayout);

    DComboBox *pDComboBoxtwo = new DComboBox();
    pDComboBoxtwo->setFixedWidth(200);
    pDComboBoxtwo->addItem(tr("操作系统"));
    pDComboBoxtwo->addItem(tr("软件"));
    pDComboBoxtwo->addItem(tr("硬件"));
    qDCombBoxHBoxLayout->addWidget(pDComboBoxtwo);
    qFrameChildVBoxLayout->addLayout(qDCombBoxHBoxLayout);
    //fConnectUSFrameone->setLayout(qDCombBoxHBoxLayout);

    DComboBox *pDComboBoxThree = new DComboBox();
    pDComboBoxThree->setFixedWidth(200);
    pDComboBoxThree->addItem(tr("技术支持"));
    qDCombBoxHBoxLayout->addWidget(pDComboBoxThree);
    qFrameChildVBoxLayout->addLayout(qDCombBoxHBoxLayout);
    fConnectUSFrameone->setLayout(qFrameChildVBoxLayout);
    qConnectUSVBoxLayout->addWidget(fConnectUSFrameone);

    DFrame *fConnectUSFrameTwo = new DFrame();//第2个frame
    //fConnectUSFrameTwo->setFixedSize(800, 500);
    QVBoxLayout *qConnectUSFrameTwoVBox = new QVBoxLayout(fConnectUSFrameTwo);
    QLabel *qPhoneUSLabelWay = new QLabel();
    qPhoneUSLabelWay->setText("联系名片");
    qPhoneUSLabelWay->setWordWrap(true);
    qConnectUSFrameTwoVBox->addWidget(qPhoneUSLabelWay);
    qPhoneUSLabelWay->setFont(qSetWordSize);

    DFrame *fConnectUSFrameTwoChild = new DFrame();//第2个frame的子frame
    fConnectUSFrameTwoChild->setFixedSize(750,370);
    QHBoxLayout *qChildHBoxLayout = new QHBoxLayout(fConnectUSFrameTwoChild);//子frame的水平布局
    //第1个垂直布局
    QVBoxLayout *qChildHBoxLayoutOne = new QVBoxLayout();
    //team图片
    QLabel *qOneRowOneColumLabel = new QLabel();
    QPixmap qTeamPhoto(":/images/team.svg");
    qOneRowOneColumLabel->setPixmap(qTeamPhoto);
    qChildHBoxLayoutOne->addWidget(qOneRowOneColumLabel);
    qChildHBoxLayoutOne->addStretch();
    //phone图片
    QLabel *qTwoRowOneColumLabel = new QLabel();
    QPixmap qPhonePhoto(":/images/phone.svg");
    qTwoRowOneColumLabel->setPixmap(qPhonePhoto);
    qChildHBoxLayoutOne->addWidget(qTwoRowOneColumLabel);
    qChildHBoxLayoutOne->addStretch();
    //eamil图片
    QLabel *qThreeRowOneColumLabel = new QLabel();
    QPixmap qMailLight(":/images/mail_light.svg");
    qThreeRowOneColumLabel->setPixmap(qMailLight);
    qChildHBoxLayoutOne->addWidget(qThreeRowOneColumLabel);
    qChildHBoxLayoutOne->addStretch();
    qChildHBoxLayout->addLayout(qChildHBoxLayoutOne);

    //第2个垂直布局
    QVBoxLayout *qChildVBoxLayoutTwo = new QVBoxLayout();
    DVerticalLine *pDVerticalLine = new DVerticalLine();
    pDVerticalLine->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);;
    pDVerticalLine->setAutoFillBackground(true);
    qChildVBoxLayoutTwo->addWidget(pDVerticalLine);
    qChildHBoxLayout->addLayout(qChildVBoxLayoutTwo);
    //第3个垂直布局
    QVBoxLayout *qChildVBoxLayoutThree = new QVBoxLayout();
    QLabel *qServSupport = new QLabel();
    qServSupport->setText("服务与支持");
    qChildVBoxLayoutThree->addWidget(qServSupport);

    QLabel *qUOSSupportTeam = new QLabel();
    qUOSSupportTeam->setText("UOS Support Team");
    qChildVBoxLayoutThree->addWidget(qUOSSupportTeam);

    DHorizontalLine *pDHorizontalLineOne = new DHorizontalLine();
    pDHorizontalLineOne->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    //pDHorizontalLineOne->setAutoFillBackground(true);
    qChildVBoxLayoutThree->addWidget(pDHorizontalLineOne);

    QLabel *qPhoneLabel = new QLabel();
    qPhoneLabel->setText("电话");
    qChildVBoxLayoutThree->addWidget(qPhoneLabel);

    QLabel *qPhoneNumberLabel = new QLabel();
    qPhoneNumberLabel->setText("4008588488");
    qChildVBoxLayoutThree->addWidget(qPhoneNumberLabel);

    DHorizontalLine *pDHorizontalLineTwo = new DHorizontalLine();
    pDHorizontalLineTwo->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    pDHorizontalLineTwo->setAutoFillBackground(true);
    qChildVBoxLayoutThree->addWidget(pDHorizontalLineTwo);

    QLabel *qEmailLabel = new QLabel();
    qEmailLabel->setText("邮箱");
    qChildVBoxLayoutThree->addWidget(qEmailLabel);

    QLabel *qEmailNumberLabel = new QLabel();
    qEmailNumberLabel->setText("support@uniontech.com");
    qChildVBoxLayoutThree->addWidget(qEmailNumberLabel);

    qChildHBoxLayout->addLayout(qChildVBoxLayoutThree);
    //第4个垂直布局
    QVBoxLayout *qChildVBoxLayoutFour = new QVBoxLayout();

    QLabel *qTwoDimensionalCodeLabel = new QLabel();
    QPixmap qTwoDimensionalCode(":/images/contact_me_qr.png");
    QPixmap qTmpContactMePicture = qTwoDimensionalCode.scaled(100, 100);
    //qTwoDimensionalCodeLabel->setPixmap(qTwoDimensionalCode);
    qTwoDimensionalCodeLabel->setPixmap(qTmpContactMePicture);
    qChildVBoxLayoutFour->addWidget(qTwoDimensionalCodeLabel);
    //企业微信水平布局
    QHBoxLayout *qWeiXinConnect = new QHBoxLayout();
    QLabel *qComputerWeiXinLabel = new QLabel();
    QPixmap qComputerWeiXinPixmap(":/images/wechat.svg");
    qComputerWeiXinLabel->setPixmap(qComputerWeiXinPixmap);
    qComputerWeiXinLabel->setAlignment(Qt::AlignLeft);
    qWeiXinConnect->addWidget(qComputerWeiXinLabel);
    //qChildVBoxLayoutFour->addLayout(qWeiXinConnect);

    QLabel *qWeiXinChinese = new QLabel();
    qWeiXinChinese->setText("企业微信");
    qWeiXinChinese->setAlignment(Qt::AlignLeft);
    qWeiXinConnect->addWidget(qWeiXinChinese);
    qChildVBoxLayoutFour->addLayout(qWeiXinConnect);
    qChildHBoxLayout->addLayout(qChildVBoxLayoutFour);

    //fConnectUSFrameTwo
    qConnectUSFrameTwoVBox->addWidget(fConnectUSFrameTwoChild);

    //qConnectUSFrameTwoVBox->addWidget(qPhoneUSLabelWay);
    //qPhoneUSLabelWay->setFont(qSetWordSize);



    /*
    //画线
    DVerticalLine *pDVerticalLine = new DVerticalLine();
    //pDVerticalLine->setFixedSize(10,200);
    pDVerticalLine->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    //pDVerticalLine->setBackgroundRole(QPalette::Highlight);
    pDVerticalLine->setAutoFillBackground(true);

    qConnectUSFrameTwoVBox->addWidget(pDVerticalLine);
    */

    fConnectUSFrameTwo->setLayout(qConnectUSFrameTwoVBox);
    qConnectUSVBoxLayout->addWidget(fConnectUSFrameTwo);
    qConnectUSVBoxLayout->addStretch();



    //pHBoxLayout->addStretch();
    //pMainVBoxLayout->addLayout(pHBoxLayout);

    //pMainVBoxLayout->addStretch();
    //this->setLayout(pMainVBoxLayout);

}
phoneus :: ~phoneus()
{

}
