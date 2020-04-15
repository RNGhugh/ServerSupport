#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "selfhelpsupport.h"

selfhelpsupport::selfhelpsupport(QWidget *parent) : QWidget (parent)
{
    QVBoxLayout *qSelfHelpVBox = new QVBoxLayout(this);

    QPixmap qSelfHelpPixMap(":/images/banners.png");
    QLabel *qLabelPhotoBanner = new QLabel(this);
    qLabelPhotoBanner->setPixmap(qSelfHelpPixMap);
    qSelfHelpVBox->addWidget(qLabelPhotoBanner);

    QLabel *qLabelSecondWord = new QLabel(this);
    qLabelSecondWord->setText("UOS服务与支持涵盖远程服务、现场服务、培训服务、定制服务和顾问咨询服务，您可以通过UOS官网了解详情。");
    qSelfHelpVBox->addWidget(qLabelSecondWord);
    QFont qLittleWord;
    qLittleWord.setPointSize(8);
    qLabelSecondWord->setFont(qLittleWord);

    QLabel *qLinkWord = new QLabel(this);
    qLinkWord->setAlignment(Qt::AlignRight);
    qLinkWord->setText("<style> a {text-decoration: none} </style> <a href=\"https://i.csdn.net/#/uc/profile\">了解更多服务与支持的内容");
    //qLinkWord->setText(QString("<a href = \"%1\">%2</a>").arg("https://i.csdn.net/#/uc/profile").arg(QStringLiteral("了解更多服务与支持的内容")));//带下划线的
    qLinkWord->setOpenExternalLinks(true);
    qLinkWord->setFont(qLittleWord);
    qSelfHelpVBox->addWidget(qLinkWord);

    QLabel *qLabelThirdWord = new QLabel(this);
    qLabelThirdWord->setText("用户可通过搜索、查阅帮助手册、文档中心和FAQ内容，以排除疑问，解决问题。");
    qLabelThirdWord->setAlignment(Qt::AlignCenter);
    QFont qLongWord;
    qLongWord.setPointSize(9);
    qLabelThirdWord->setFont(qLongWord);
    qSelfHelpVBox->addWidget(qLabelThirdWord);

    QHBoxLayout *qSelfHelpHBoxone = new QHBoxLayout(this);
    //文档中心
    QVBoxLayout *qVBoxChildLayoutOne = new QVBoxLayout();
    qVBoxChildLayoutOne->addStretch();

    DFrame *fFileCenterFraem = new DFrame();
    fFileCenterFraem->setFixedHeight(150);

    QPixmap qFileCenter(":/images/doc.svg");
    QLabel *qFIleCenterLabel = new QLabel(this);
    qFIleCenterLabel->setAlignment(Qt::AlignCenter);
    qFIleCenterLabel->setPixmap(qFileCenter);
    qVBoxChildLayoutOne->addWidget(qFIleCenterLabel);

    QLabel *qFileCenterLink = new QLabel(this);
    qFileCenterLink->setAlignment(Qt::AlignCenter);
    qFileCenterLink->setText("<style> a {text-decoration: none} </style> <a href=\"https://i.csdn.net/#/uc/profile\">前往文档中心");
    qFileCenterLink->setFont(qLittleWord);
    qVBoxChildLayoutOne->addWidget(qFileCenterLink);

    fFileCenterFraem->setLayout(qVBoxChildLayoutOne);

    qSelfHelpHBoxone->addWidget(fFileCenterFraem);
    qSelfHelpVBox->addLayout(qSelfHelpHBoxone);

    //前往FAQ
    QVBoxLayout *qVBoxChildLayoutTwo = new QVBoxLayout();
    qVBoxChildLayoutTwo->addStretch();
    DFrame *fFAQFraem = new DFrame();
    fFAQFraem->setFixedHeight(150);
    QPixmap qFAQPixmap(":/images/faq.svg");
    QLabel *qFAQLabel = new QLabel(this);
    qFAQLabel->setAlignment(Qt::AlignCenter);
    qFAQLabel->setPixmap(qFAQPixmap);
    qVBoxChildLayoutTwo->addWidget(qFAQLabel);

    QLabel *qFAQLink = new QLabel(this);
    qFAQLink->setAlignment(Qt::AlignCenter);
    qFAQLink->setText("<style> a {text-decoration: none} </style> <a href=\"https://blog.csdn.net/fron_csl/article/details/46399875\">前往FAQ");
    qFAQLink->setFont(qLittleWord);
    qVBoxChildLayoutTwo->addWidget(qFAQLink);

    fFAQFraem->setLayout(qVBoxChildLayoutTwo);
    qSelfHelpHBoxone->addWidget(fFAQFraem);
    qSelfHelpVBox->addLayout(qSelfHelpHBoxone);

    //打开帮助手册
    QVBoxLayout *qVBoxChildLayoutThree = new QVBoxLayout();
    qVBoxChildLayoutThree->addStretch();
    DFrame *fOpenHelpManual = new DFrame();
    fOpenHelpManual->setFixedHeight(150);
    QPixmap qOpenHelpManualPixmap(":/images/help.svg");
    QLabel *qOpenHelpManualLabel = new QLabel(this);
    qOpenHelpManualLabel->setAlignment(Qt::AlignCenter);
    qOpenHelpManualLabel->setPixmap(qOpenHelpManualPixmap);
    qVBoxChildLayoutThree->addWidget(qOpenHelpManualLabel);

    QLabel *qOpenHelpManualLink = new QLabel(this);
    qOpenHelpManualLink->setAlignment(Qt::AlignCenter);
    qOpenHelpManualLink->setText("<style> a {text-decoration: none} </style> <a href=\"https://blog.csdn.net/fron_csl/article/details/46399875\">前往帮助中心");
    qOpenHelpManualLink->setFont(qLittleWord);
    qVBoxChildLayoutThree->addWidget(qOpenHelpManualLink);

    fOpenHelpManual->setLayout(qVBoxChildLayoutThree);
    qSelfHelpHBoxone->addWidget(fOpenHelpManual);
    qSelfHelpVBox->addLayout(qSelfHelpHBoxone, 100);

    qSelfHelpVBox->addStretch();
}
selfhelpsupport::~selfhelpsupport()
{

}
