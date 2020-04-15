#ifndef DMENUWIDGET_H
#define DMENUWIDGET_H

//菜单选项功能

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <DMenu>

DWIDGET_USE_NAMESPACE

class dmenuwidget : public QWidget
{
public:
    dmenuwidget(QWidget *parent = nullptr);
    ~dmenuwidget();
public slots:
    void slotAction();
private:
    QAction *m_oneAction;
};

#endif // DMENUWIDGET_H
