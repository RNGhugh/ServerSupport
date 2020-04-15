#ifndef ONLINECUSTOMER_H
#define ONLINECUSTOMER_H

#include <DBackgroundGroup>
#include <DPushButton>
#include <DTextBrowser>
#include <DPalette>
#include <DApplicationHelper>
#include <DTextEdit>

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDebug>
#include <QLabel>
#include <QWidget>
#include <QPixmap>

DGUI_USE_NAMESPACE
DWIDGET_USE_NAMESPACE

class onlinecustomer : public QWidget
{
    Q_OBJECT
public:
    explicit onlinecustomer(QWidget *parent = nullptr);
    ~onlinecustomer();
signals:
public slots:
};

#endif // ONLINECUSTOMER_H
