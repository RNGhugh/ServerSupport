#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H

#include <DApplication>
#include <DMainWindow>
#include <QHBoxLayout>
#include <DListView>
#include <QStackedWidget>
#include <DTextEdit>
#include <DTitlebar>
#include <DSearchEdit>
#include <DButtonBox>
#include <DApplicationHelper>

#include <DStandardPaths>
#include <qsettingbackend.h>
#include <DSettingsDialog>

#include <QtDebug>

#include "dmenuwidget.h"
#include "selfhelpsupport.h"
#include "introduce.h"
#include "messageinquiry.h"
#include "phoneus.h"
#include "onlinecustomer.h"

DWIDGET_USE_NAMESPACE

class mainwindows : public DMainWindow
{
public:
    mainwindows(DMainWindow *parent = nullptr);
    ~mainwindows();
private:
    QHBoxLayout *m_pHBoxLayout;
    DListView *m_pDListView;
    QWidget *m_pCentralWidget;
    QStackedWidget *m_pStackedWidget;
    QHash<QString, QWidget*> m_has_ItemName_ItemWiget;

    selfhelpsupport *m_pSelfHelpSupport;
    introduce *m_pIntroduce;
    messageinquiry *m_pMessageQuiry;
    phoneus *m_pPhoneUs;
    onlinecustomer *m_pOnlineCustomer;

    QAction *m_oneAction;

    QString m_strConfDir;
    QString m_srConfPath;
public slots:
    void slotListViewItemClicked(const QModelIndex &index);
    void slotActionTriggred();
private:
    void optionsInit();
    void slotPopupSettingsDialog();
};

#endif // MAINWINDOWS_H
