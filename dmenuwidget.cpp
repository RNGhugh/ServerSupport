#include "dmenuwidget.h"

dmenuwidget::dmenuwidget(QWidget *parent) : QWidget (parent)
{
    QVBoxLayout *pVBosxLayout = new QVBoxLayout();//垂直分布  QH是水平分布
    pVBosxLayout->setSpacing(20);
    pVBosxLayout->addStretch();

    QHBoxLayout *pHBoxLayout = new QHBoxLayout();
    pHBoxLayout->addStretch();
    DMenu *pDMenu = new DMenu();

    QAction *newWindowsAction(new QAction(tr("新窗口"), this));
    QAction *newTabAction(new QAction(tr("New tab"), this));
    QAction *openFileAction(new QAction(tr("打开文件"), this));
    QAction *saveAction(new QAction(tr("保存"), this));
    QAction *saveAsAction(new QAction(tr("Save as"), this));
    QAction *printAction(new QAction(tr("打印"), this));
    QAction *switchThemeAction(new QAction(tr("Switch theme"), this));
    QAction *settingAction(new QAction(tr("Settings"), this));

    DMenu *pDMenuLevel2 = new DMenu(tr("一级菜单"));

    m_oneAction = new QAction(tr("选项1"), this);
    QAction *twoAction(new QAction(tr("选项2"), this));
    QAction *threeAction(new QAction(tr("选项3"), this));
    QAction *fourAction(new QAction(tr("选项4"), this));
    QAction *fiveAction(new QAction(tr("选项5"), this));
    QAction *sixAction(new QAction(tr("选项6"), this));

    pDMenuLevel2->addAction(m_oneAction);
    pDMenuLevel2->addAction(twoAction);
    pDMenuLevel2->addAction(threeAction);
    pDMenuLevel2->addAction(fourAction);
    pDMenuLevel2->addAction(fiveAction);
    pDMenuLevel2->addAction(sixAction);

    pDMenu->addAction(newWindowsAction);
    pDMenu->addAction(newTabAction);
    pDMenu->addAction(openFileAction);
    pDMenu->addSeparator();
    pDMenu->addAction(saveAction);
    pDMenu->addAction(saveAsAction);
    pDMenu->addAction(printAction);
    pDMenu->addAction(switchThemeAction);
    pDMenu->addSeparator();
    pDMenu->addAction(settingAction);
    pDMenu->addMenu(pDMenuLevel2);

    pDMenu->show();

    connect(m_oneAction, &QAction::triggered, this, &dmenuwidget::slotAction);

    pHBoxLayout->addWidget(pDMenu);
    pHBoxLayout->addStretch();
    pVBosxLayout->addLayout(pHBoxLayout);

    pVBosxLayout->addStretch();
    this->setLayout(pVBosxLayout);
}

dmenuwidget::~dmenuwidget()
{

}

void dmenuwidget::slotAction()
{
    m_oneAction->setIcon(QIcon(":/images/ok.svg"));
}
