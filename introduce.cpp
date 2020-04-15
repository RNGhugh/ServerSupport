#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "introduce.h"

introduce::introduce(QWidget *parent) : QWidget (parent)
{

    QVBoxLayout *pTotalLabel = new QVBoxLayout(this);
    //pTotalLabel->addStretch();
    //pTotalLabel->setSpacing(10);

    QPixmap qBannersPng(":/images/banners.png");
    //QPixmap qTmpBannerPng = qBannersPng.scaled(100, 100);
    QLabel *pLabel = new QLabel();
    pLabel->setPixmap(qBannersPng);
    //pLabel->setFixedSize(650, 120);
    //pLabel->setScaledContents(true);

    pTotalLabel->addWidget(pLabel);

    QLabel *pLabel2 = new QLabel(this);
    pLabel2->setText("UOS服务与支持涵盖远程服务、现场服务、培训服务、定制服务和顾问咨询服务，您可以通过UOS官网了解详情。");
    pLabel2->setWordWrap(true);//自动换行
    pLabel2->setAlignment(Qt::AlignLeft);
    QFont ft;
    ft.setPointSize(8);
    pLabel2->setFont(ft);

    pTotalLabel->addWidget(pLabel2);

    QLabel *pLabel3 = new QLabel(this);
    //pLabel3->setGeometry(0, 150, 600, 100);//设置位置
    pLabel3->setAlignment(Qt::AlignRight);
    pLabel3->setText("<style> a {text-decoration: none} </style> <a href=\"https://i.csdn.net/#/uc/profile\">了解更多服务与支持的内容");
    //pLabel3->setText(QString("<a href = \"%1\">%2</a>").arg("https://i.csdn.net/#/uc/profile").arg(QStringLiteral("了解更多服务与支持的内容")));
    pLabel3->setOpenExternalLinks(true);
    pLabel3->setFont(ft);

    pTotalLabel->addWidget(pLabel3);

    QLabel *pLabel4 = new QLabel(this);
    //pLabel4->setGeometry(0, 120, 600, 100);
    pLabel4->setAlignment(Qt::AlignCenter);
    pLabel4->setText("用户可通过以下方式寻求技术支持和服务");
    pLabel4->setOpenExternalLinks(true);
    pLabel4->setFont(ft);

    pTotalLabel->addWidget(pLabel4);
    //pTotalLabel->addStretch();

/*******************************************************/

    QHBoxLayout *pHBoxLayout2 = new QHBoxLayout(this);
    //pHBoxLayout2->setSpacing(10);
    //pHBoxLayout2->addStretch();

    QFont qShortWord;
    qShortWord.setPointSize(9);
    QFont qLongWord;
    qLongWord.setPointSize(10);

    QVBoxLayout *pOneRowThreeColumn = new QVBoxLayout();

    DFrame *fOneRowThreeColumn = new DFrame();
    fOneRowThreeColumn->setMinimumSize(200, 150);
    fOneRowThreeColumn->setFrameRounded(true);

    QPixmap pThirdPhoto(":/images/online.svg");
    QLabel *lOneThreeLabelOne = new QLabel(this);
    lOneThreeLabelOne->setAlignment(Qt::AlignCenter);
    lOneThreeLabelOne->setPixmap(pThirdPhoto);
    pOneRowThreeColumn->addWidget(lOneThreeLabelOne);

    QLabel *lOneThreeLabeltwo = new QLabel(this);
    lOneThreeLabeltwo->setAlignment(Qt::AlignCenter);
    lOneThreeLabeltwo->setText("在线咨询");
    lOneThreeLabeltwo->setFont(qShortWord);
    pOneRowThreeColumn->addWidget(lOneThreeLabeltwo);

    QLabel *lOneThreeLabelthree = new QLabel(this);
    //lOneThreeLabelthree->setAlignment(Qt::AlignCenter);
    lOneThreeLabelthree->setText("提供IM和反馈两种在线咨询方式");
    lOneThreeLabelthree->setFont(qLongWord);
    lOneThreeLabelthree->setWordWrap(true);
    pOneRowThreeColumn->addWidget(lOneThreeLabelthree);

    fOneRowThreeColumn->setLayout(pOneRowThreeColumn);
    pHBoxLayout2->addWidget(fOneRowThreeColumn);



    QVBoxLayout *pVBoxLayout = new QVBoxLayout();

    DFrame *pFrame = new DFrame();
    pFrame->setMinimumSize(200, 150);
    pFrame->setFrameRounded(true);

    QPixmap pSecondPhoto(":/images/tel.svg");
    QLabel *pScondLabel = new QLabel(this);
    pScondLabel->setAlignment(Qt::AlignCenter);
    pScondLabel->setPixmap(pSecondPhoto);
    pVBoxLayout->addWidget(pScondLabel);

    QLabel *pFirstLabel = new QLabel(this);
    pFirstLabel->setAlignment(Qt::AlignCenter);
    pFirstLabel->setText("电话");
    pFirstLabel->setFont(qShortWord);
    pVBoxLayout->addWidget(pFirstLabel);

    QLabel *pFirstLabel1 = new QLabel(this);
    //pFirstLabel1->setAlignment(Qt::AlignCenter);
    pFirstLabel1->setText("5*8小时或7*24小时呼叫中心电话支持响应");
    pFirstLabel1->setFont(qLongWord);
    pFirstLabel1->setWordWrap(true);
    pVBoxLayout->addWidget(pFirstLabel1);

    pFrame->setLayout(pVBoxLayout);
    pHBoxLayout2->addWidget(pFrame);


    QVBoxLayout *pVBoxLayout2 = new QVBoxLayout();
    //pVBoxLayout2->addStretch();
    DFrame *pDFrame2 = new DFrame();
    pDFrame2->setMinimumSize(200, 150);
    pDFrame2->setFrameRounded(true);

    QPixmap pixmap2(":/images/mail.svg");
    QLabel *pLabel5 = new QLabel(this);
    pLabel5->setAlignment(Qt::AlignCenter);
    pLabel5->setPixmap(pixmap2);
    pVBoxLayout2->addWidget(pLabel5);

    QLabel *pLabel6 = new QLabel(this);
    pLabel6->setAlignment(Qt::AlignCenter);
    pLabel6->setText("邮件");
    pLabel6->setFont(qShortWord);
    pLabel6->setWordWrap(true);
    pVBoxLayout2->addWidget(pLabel6);

    QLabel *pLabel7 = new QLabel(this);
    //pLabel7->setAlignment(Qt::AlignCenter);
    pLabel7->setText("用户可通过发送邮件到指定官方邮件，寻求服务与支持响应");
    pLabel7->setFont(qLongWord);
    pLabel7->setWordWrap(true);
    pVBoxLayout2->addWidget(pLabel7);

    pDFrame2->setLayout(pVBoxLayout2);
    pHBoxLayout2->addWidget(pDFrame2);
    pHBoxLayout2->addStretch();
    pTotalLabel->addLayout(pHBoxLayout2);
    //****************************************
    QHBoxLayout *pSecondHBoxLayout = new QHBoxLayout(this);
    //pSecondHBoxLayout->setSpacing(10);
    //pSecondHBoxLayout->addStretch();
    //第2行第1列
    QVBoxLayout *pTwoRowOneColumnVBox = new QVBoxLayout();

    DFrame *pSecondFrameOne = new DFrame();
    pSecondFrameOne->setMinimumSize(200, 150);
    pSecondFrameOne->setFrameRounded(true);

    QPixmap qSecondLineOnePhoto(":/images/wechat.svg");
    QLabel *lTwoOneLabelOne = new QLabel(this);
    lTwoOneLabelOne->setAlignment(Qt::AlignCenter);
    lTwoOneLabelOne->setPixmap(qSecondLineOnePhoto);
    pTwoRowOneColumnVBox->addWidget(lTwoOneLabelOne);

    QLabel *lTwoOneLabelTwo = new QLabel(this);
    lTwoOneLabelTwo->setAlignment(Qt::AlignCenter);
    lTwoOneLabelTwo->setText("企业微信");
    lTwoOneLabelTwo->setFont(qShortWord);
    pTwoRowOneColumnVBox->addWidget(lTwoOneLabelTwo);

    QLabel *lTwoOneLabelThree = new QLabel(this);
    lTwoOneLabelThree->setAlignment(Qt::AlignCenter);
    lTwoOneLabelThree->setText("用户可通过微信添加服务与支持团队成员企业微信为好友，寻求在线响应");
    lTwoOneLabelThree->setFont(qLongWord);
    lTwoOneLabelThree->setWordWrap(true);
    pTwoRowOneColumnVBox->addWidget(lTwoOneLabelThree);

    pSecondFrameOne->setLayout(pTwoRowOneColumnVBox);
    pSecondHBoxLayout->addWidget(pSecondFrameOne);

    //第2行第2列
    QVBoxLayout *pTwoRowTwoColumnVBox = new QVBoxLayout();

    DFrame *pSecondFrameTwo = new DFrame();
    pSecondFrameOne->setMinimumSize(200, 150);
    pSecondFrameOne->setFrameRounded(true);

    QPixmap qSecondLineTwoPhoto(":/images/self.svg");
    QLabel *lTwoTwoLabelOne = new QLabel(this);
    lTwoTwoLabelOne->setAlignment(Qt::AlignCenter);
    lTwoTwoLabelOne->setPixmap(qSecondLineTwoPhoto);
    pTwoRowTwoColumnVBox->addWidget(lTwoTwoLabelOne);

    QLabel *lTwoTwoLabelTwo = new QLabel(this);
    lTwoTwoLabelTwo->setAlignment(Qt::AlignCenter);
    lTwoTwoLabelTwo->setText("自助支持");
    lTwoTwoLabelTwo->setFont(qShortWord);
    pTwoRowTwoColumnVBox->addWidget(lTwoTwoLabelTwo);

    QLabel *lTwoTwoLabelThree= new QLabel(this);
    lTwoTwoLabelThree->setAlignment(Qt::AlignCenter);
    lTwoTwoLabelThree->setText("用户可通过搜索、查阅帮助手册、文档中心和FAQ内容、以排除疑问解决解决问题");
    lTwoTwoLabelThree->setFont(qLongWord);
    lTwoTwoLabelThree->setWordWrap(true);
    pTwoRowTwoColumnVBox->addWidget(lTwoTwoLabelThree);

    pSecondFrameTwo->setLayout(pTwoRowTwoColumnVBox);
    pSecondHBoxLayout->addWidget(pSecondFrameTwo);
    pSecondHBoxLayout->addStretch();
    //pSecondHBoxLayout->addStretch();
    pTotalLabel->addLayout(pSecondHBoxLayout);

   /*
    QLabel *pLabel2;
    pLabel2 = new QLabel(tr("一去二三里"));
    pLabel2->setGeometry(rect().x()+100, rect().y() + 800, 600, 120);
    pLabel2->setParent(this);
    */
    /*
    QLabel *pLabel2 = new QLabel(this);
    pLabel2->setWordWrap(true);
    QString strText = QStringLiteral("一去二三里，烟村四五家。亭台六七座，八九十枝花。");
    QString strHeightText = "<p style=\"line-height:%1%\">%10<p>";
    strText = strHeightText.arg(350).arg(strText);
    pLabel2->setText(strText);
    */

   //pTotalLabel->addStretch();
}
introduce::~introduce()
{

}
