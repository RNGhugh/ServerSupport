#include "mainwindows.h"
#include <QTextEdit>
#include <QLabel>
#include <DDesktopServices>
#include <DDialog>
#include <DTabBar>
#include <DSlider>
#include <DDialog>
#include <QString>
#include <qdir.h>
mainwindows::mainwindows(DMainWindow *parent)
    : DMainWindow (parent),
      m_pCentralWidget (new QWidget),
      m_pStackedWidget (new QStackedWidget()),
      m_pDListView (new DListView()),
      m_pSelfHelpSupport(new selfhelpsupport()),
      m_pIntroduce (new introduce()),
      m_pMessageQuiry(new messageinquiry()),
      m_pPhoneUs(new phoneus()),
      m_pOnlineCustomer(new onlinecustomer())
{
    optionsInit();
    //titlebar 设置标题栏
    //titlebar()->setIcon(QIcon::fromTheme("deepin-deitor"));
    titlebar()->setIcon(QIcon(":/images/title.svg"));
    const QString qstring = "";
    titlebar()->setTitle(qstring);//让标题栏无文字内容显示
    DMenu *pDMenu = new DMenu;
    QAction *HElpAction(new QAction(tr("帮助"), this));
    pDMenu->addAction(HElpAction);
    titlebar()->setMenu(pDMenu);
    //connect(m_oneAction, &QAction::triggered, this, &mainwindows::slotActionTriggred);
    //connect(settingAction, &QAction::triggered, this, &mainwindows::slotPopupSettingsDialog);
    m_pHBoxLayout = new QHBoxLayout();
    m_pHBoxLayout->addWidget(m_pDListView, 2);
    m_pHBoxLayout->addWidget(m_pStackedWidget, 8);
    QStandardItemModel *pItemModel = new QStandardItemModel(this);

    QStandardItem *pItemIntroduce = new QStandardItem(QIcon(":/images/introduce.svg"),"介绍");
    m_pStackedWidget->addWidget(m_pIntroduce);
    m_has_ItemName_ItemWiget.insert("介绍", m_pIntroduce);
    pItemModel->appendRow(pItemIntroduce);

    QStandardItem *pItemMwssageQuiry = new QStandardItem(QIcon(":/images/message.svg"),"留言咨询");
    m_pStackedWidget->addWidget(m_pMessageQuiry);
    m_has_ItemName_ItemWiget.insert("留言咨询", m_pMessageQuiry);
    pItemModel->appendRow(pItemMwssageQuiry);

    QStandardItem *pItemOnlineCustorm = new QStandardItem(QIcon(":/images/onlineHelp.svg"),"在线客服");
    m_pStackedWidget->addWidget(m_pOnlineCustomer);
    m_has_ItemName_ItemWiget.insert("在线客服", m_pOnlineCustomer);
    pItemModel->appendRow(pItemOnlineCustorm);

    QStandardItem *pItemPhoneus = new QStandardItem(QIcon(":/images/connectustwo.svg"),"联系我们");
    m_pStackedWidget->addWidget(m_pPhoneUs);
    m_has_ItemName_ItemWiget.insert("联系我们", m_pPhoneUs);
    pItemModel->appendRow(pItemPhoneus);

    QStandardItem *pItemSelfHelpSupport = new QStandardItem(QIcon(":/images/self.svg"),"自主支持");
    m_pStackedWidget->addWidget(m_pSelfHelpSupport);
    m_has_ItemName_ItemWiget.insert(("自主支持"), m_pSelfHelpSupport);
    pItemModel->appendRow(pItemSelfHelpSupport);

    m_pDListView->setModel(pItemModel);
    //m_pStackedWidget->setCurrentWidget(m_pPushButtonWidget);
    connect(m_pDListView, &DListView::clicked, this, &mainwindows::slotListViewItemClicked, Qt::QueuedConnection);
    m_pCentralWidget->setLayout(m_pHBoxLayout);
    setCentralWidget(m_pCentralWidget);
    //this->statusBar();//this->statusBar()->setSizeGripEnabled(true);
}
mainwindows::~mainwindows()
{
}
void mainwindows::slotListViewItemClicked(const QModelIndex &index)
{
    QString strItemName = index.data().toString();
    qDebug() << "strItemName:" << strItemName;
    m_pStackedWidget->setCurrentWidget(m_has_ItemName_ItemWiget.value(strItemName));
}
void mainwindows::slotActionTriggred()
{
    m_oneAction->setIcon(QIcon(":/images/ok.svg"));
}
void mainwindows::optionsInit()
{
    m_strConfDir = DStandardPaths::writableLocation(QStandardPaths::AppConfigLocation);
        qDebug() << "m_strConfDir:" <<m_strConfDir;
        QString m_srConfPath = m_strConfDir + QDir::separator() + "dtkdemo.conf";
        qDebug() << "m_strConfDir:" <<m_srConfPath;
}
void mainwindows::slotPopupSettingsDialog()
{
    DSettingsDialog *pDSettingDialog = new DSettingsDialog();
    //创建设置存储后端
    QSettingBackend *pBackend = new QSettingBackend(m_srConfPath);
    //通过json文件创建DSettings对象
    DSettings *pDSettings = DSettings::fromJsonFile(":/resource/settings.json");
    //设置DSettings存储后端
    pDSettings->setBackend(pBackend);
    pDSettingDialog->updateSettings(pDSettings);
    pDSettingDialog->exec();
}
