#ifndef SELFHELPSUPPORT_H
#define SELFHELPSUPPORT_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <DPushButton>
#include <QFileDialog>
#include <DLabel>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <DIconButton>
#include <QGraphicsOpacityEffect>
#include <DPushButton>
#include <DFrame>

DWIDGET_USE_NAMESPACE

class selfhelpsupport : public QWidget
{
    Q_OBJECT
public:
    explicit selfhelpsupport(QWidget *parent = nullptr);
    ~selfhelpsupport();

signals:
public slots:
};

#endif // SELFHELPSUPPORT_H
