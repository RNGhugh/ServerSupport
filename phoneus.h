#ifndef PHONEUS_H
#define PHONEUS_H

#include <DBackgroundGroup>
#include <DPushButton>
#include <DPalette>
#include <DFrame>
#include <DApplicationHelper>
#include <DComboBox>
#include <DVerticalLine>
#include <DHorizontalLine>
#include <DDial>

#include <QFont>
#include <QDebug>
#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

DGUI_USE_NAMESPACE
DWIDGET_USE_NAMESPACE

class phoneus : public QWidget
{
    Q_OBJECT
public:
    explicit phoneus(QWidget *parent = nullptr);
    ~phoneus();
signals:
public slots:
};

#endif // PHONEUS_H
