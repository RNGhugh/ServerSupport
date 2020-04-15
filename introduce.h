#ifndef INTRODUCE_H
#define INTRODUCE_H

#include <QWidget>
#include <DBackgroundGroup>
#include <DPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <DIconButton>
#include <DPalette>
#include <DApplicationHelper>
#include <QDebug>
#include <QLabel>
#include <DFrame>

DGUI_USE_NAMESPACE
DWIDGET_USE_NAMESPACE


class introduce : public QWidget
{
    Q_OBJECT
public:
    explicit introduce(QWidget *parent = nullptr);
    ~introduce();
signals:
public slots:
};

#endif // INTRODUCE_H
