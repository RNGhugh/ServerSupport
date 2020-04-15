#include "messageinquiry.h"

messageinquiry::messageinquiry(QWidget *parent) : QWidget (parent)
{
    QVBoxLayout *qOnlineCustomVBoxLayout = new QVBoxLayout(this);//总的垂直布局
    DFrame *dInquiryKinds = createdframe();
    QHBoxLayout *qInquiryKindsHBoxLayout = createdhboxlayout();
    QLabel *qInquiryKindsQLabel = createdqlabed();
    qInquiryKindsQLabel->setText("咨询类别");
    qInquiryKindsHBoxLayout->addWidget(qInquiryKindsQLabel);

    DComboBox *dFirstDcomboBox = createddcombobox();
    dFirstDcomboBox->setFixedWidth(200);
    dFirstDcomboBox->addItem("技术支持");
    qInquiryKindsHBoxLayout->addWidget(dFirstDcomboBox);

    DComboBox *dSecondDcomboBox = createddcombobox();
    dSecondDcomboBox->setFixedWidth(200);
    dSecondDcomboBox->addItem(tr("操作系统"));
    dSecondDcomboBox->addItem(tr("硬件"));
    dSecondDcomboBox->addItem(tr("软件"));
    qInquiryKindsHBoxLayout->addWidget(dSecondDcomboBox);

    DComboBox *dThirdDcomboBox = createddcombobox();
    dThirdDcomboBox->setFixedWidth(200);
    dThirdDcomboBox->addItem(tr("桌面"));
    dThirdDcomboBox->addItem(tr("任务栏"));
    dThirdDcomboBox->addItem(tr("开始与启动器"));
    dThirdDcomboBox->addItem(tr("窗口管理"));
    dThirdDcomboBox->addItem(tr("系统激活"));
    dThirdDcomboBox->addItem(tr("开发者模式"));
    dThirdDcomboBox->addItem(tr("UOS ID"));
    dThirdDcomboBox->addItem(tr("其他"));
    qInquiryKindsHBoxLayout->addWidget(dThirdDcomboBox);
    dInquiryKinds->setLayout(qInquiryKindsHBoxLayout);//水平布局放QFram

    DFrame *dTitleDFrame = createdframe();
    QHBoxLayout *qTitleHBoxLayout = createdhboxlayout();
    QLabel *qTitleQLabel = createdqlabed();
    qTitleQLabel->setText("标题");
    qTitleHBoxLayout->addWidget(qTitleQLabel);
    //dTitleDFrame->setLayout(qTitleHBoxLayout);

    QLabel *qRedStarQLabel = new QLabel("<h2><font color=red>*</font></h2>");
    QFont qSetWordSize;
    qSetWordSize.setPointSize(6);
    qRedStarQLabel->setFont(qSetWordSize);
    qTitleHBoxLayout->addWidget(qRedStarQLabel);

    DLineEdit *dTitleDLIneEdit = createdlineedit();
    dTitleDLIneEdit->lineEdit()->setPlaceholderText("请输入您要咨询或建议的详细标题");
    dTitleDLIneEdit->setAlert(false);
    qTitleHBoxLayout->addWidget(dTitleDLIneEdit);
    dTitleDFrame->setLayout(qTitleHBoxLayout);

    DFrame *dContentDFrame = createdframe();
    QVBoxLayout *qNeiRongVBoxLayout = new QVBoxLayout();

    QHBoxLayout *qCOntentHBoxLayout = createdhboxlayout();
    QLabel *qContentQLabel = createdqlabed();
    qContentQLabel->setText("内容");
    qCOntentHBoxLayout->addWidget(qContentQLabel);
    //dTitleDFrame->setLayout(qTitleHBoxLayout);

    QLabel *qRedStarContentQLabel = new QLabel("<h2><font color=red>*</font></h2>");
    qRedStarContentQLabel->setFont(qSetWordSize);
    qCOntentHBoxLayout->addWidget(qRedStarContentQLabel);

    DTextEdit *dContentDTextEdit = new DTextEdit();//createdlineedit();
    dContentDTextEdit->setText("*请详细描述要咨询的问题详情\n*可添加截图、视频、GIF（可使用截图录屏）进行反馈");
    qCOntentHBoxLayout->addWidget(dContentDTextEdit);
    qNeiRongVBoxLayout->addLayout(qCOntentHBoxLayout);//第一个水平布局加到垂直布局里

    QHBoxLayout *qAttachmentHBoxLayout = createdhboxlayout();
    QLabel *qZeroTwoHundred = createdqlabed();
    qZeroTwoHundred->setText("0/200");
    qAttachmentHBoxLayout->addWidget(qZeroTwoHundred);

    QLabel *qAddFile = createdqlabed();
    qAddFile->setText("<style> a {text-decoration: none} </style> <a href=\"https://i.csdn.net/#/uc/profile\">添加附件");
    qAddFile->setOpenExternalLinks(true);
    qAttachmentHBoxLayout->addWidget(qAddFile);

    QLabel *qAddFileLimit = createdqlabed();
    qAddFileLimit->setText("(不超过10MB)");
    qAttachmentHBoxLayout->addWidget(qAddFileLimit);
    qNeiRongVBoxLayout->addLayout(qAttachmentHBoxLayout);
    dContentDFrame->setLayout(qNeiRongVBoxLayout);

    DFrame *dUploadLOgDFrame = createdframe();
    QHBoxLayout *qUpLoadHBoxLayout = createdhboxlayout();

    QLabel *qUpLOadLog = createdqlabed();
    qUpLOadLog->setText("上传日志");
    qUpLoadHBoxLayout->addWidget(qUpLOadLog);
    //选择按钮
    DSwitchButton *pDSwitchButton = new DSwitchButton();
    connect(pDSwitchButton, &DSwitchButton::clicked, this, [=](bool bValue) {
        if (bValue == true) {
            DMessageManager::instance()->sendMessage(this, QIcon(tr(":/images/compress.svg")), tr("日志附件"));
        }
        else {
            //DMessageManager::instance()->sendMessage(this, QIcon(tr(":/images/warning.svg")));
        }
    });
    qUpLoadHBoxLayout->addWidget(pDSwitchButton);
    dUploadLOgDFrame->setLayout(qUpLoadHBoxLayout);

    QLabel *qUpLoadProtect = createdqlabed();
    qUpLoadProtect->setText("上传日志的过程中不会收集个人隐私信息");

    DFrame *dEmailDFrame = createdframe();
    QHBoxLayout *qEmailHBoxLayout = createdhboxlayout();

    QLabel*qEmailWord = createdqlabed();
    qEmailWord->setText("邮件");
    qEmailHBoxLayout->addWidget(qEmailWord);

    QLabel *qRedStarEmailQLabel = new QLabel("<h2><font color=red>*</font></h2>");
    qRedStarEmailQLabel->setFont(qSetWordSize);
    qEmailHBoxLayout->addWidget(qRedStarEmailQLabel);

    DLineEdit *dEmailDLIneEdit = createdlineedit();
    dEmailDLIneEdit->lineEdit()->setPlaceholderText("请留下您的Email,以方便获取进度");
    dEmailDLIneEdit->setAlert(false);
    qEmailHBoxLayout->addWidget(dEmailDLIneEdit);
    dEmailDFrame->setLayout(qEmailHBoxLayout);

    QHBoxLayout *qUseHelpHBoxLayout = createdhboxlayout();//水平布局
    QLabel *qUseHelpLable = createdqlabed();
    qUseHelpLable->setText("使用帮助:");
    qUseHelpHBoxLayout->addWidget(qUseHelpLable);
    //qUseHelpHBoxLayout->addStretch();
    QLabel *qUseContent = createdqlabed();
    qUseContent->setText("1.您可以按照咨询类别，寻求不同类型的服务和技术支持;\n"
                         "2.支持鼠标拖拽上传附件;\n"
                         "3.单个附件大小不超过15MB，附件数量不超过4个;\n"
                         "4.您的留言咨询提交后，UOS服务与支持团队将通过您的预留Email反馈处理进度和结果。");

    qUseHelpHBoxLayout->addWidget(qUseContent);

    //******************************************
    QHBoxLayout *qButtonHBoxLayout = createdhboxlayout();//水平布局

    DSuggestButton *pDSuggestButtonClear = new DSuggestButton("重置");
    pDSuggestButtonClear->setMinimumWidth(120);
    connect(pDSuggestButtonClear, &DSuggestButton::clicked, this, [=] {
        DMessageManager::instance()->sendMessage(this, QIcon(":/images/ok.svg"), tr("点击"));
    });
    pDSuggestButtonClear->setMaximumWidth(150);
    qButtonHBoxLayout->addWidget(pDSuggestButtonClear);

    DSuggestButton *pDSuggestButtonSumbit = new DSuggestButton("提交");
    pDSuggestButtonSumbit->setMinimumWidth(120);
    connect(pDSuggestButtonSumbit, &DSuggestButton::clicked, this, [=] {
        DMessageManager::instance()->sendMessage(this, QIcon(":/images/ok.svg"), tr("点击"));
    });
    pDSuggestButtonSumbit->setMaximumWidth(150);
    qButtonHBoxLayout->addWidget(pDSuggestButtonSumbit);


    qOnlineCustomVBoxLayout->addWidget(dInquiryKinds);
    qOnlineCustomVBoxLayout->addWidget(dTitleDFrame);
    qOnlineCustomVBoxLayout->addWidget(dContentDFrame);
    qOnlineCustomVBoxLayout->addWidget(dUploadLOgDFrame);
    qOnlineCustomVBoxLayout->addWidget(qUpLoadProtect);
    qOnlineCustomVBoxLayout->addWidget(dEmailDFrame);
    qOnlineCustomVBoxLayout->addLayout(qUseHelpHBoxLayout);
    qOnlineCustomVBoxLayout->addLayout(qButtonHBoxLayout);
}

DLineEdit *messageinquiry::createdlineedit()
{
    DLineEdit *dDlineEdit = new DLineEdit();
    return dDlineEdit;
}

DComboBox *messageinquiry::createddcombobox()
{
    DComboBox *pDComboBoxone = new DComboBox();
    return pDComboBoxone;
}

QLabel *messageinquiry::createdqlabed()
{
    QLabel *qLabel = new QLabel();
    return qLabel;
}

DFrame *messageinquiry:: createdframe(){
    DFrame *dFrame = new DFrame();
    return dFrame;
}
QHBoxLayout *messageinquiry::createdhboxlayout()
{
    QHBoxLayout *qHBoxLayout = new QHBoxLayout();
    return qHBoxLayout;
}
messageinquiry::~messageinquiry()
{

}
