#ifndef MESSAGEINQUIRY_H
#define MESSAGEINQUIRY_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <DIconButton>
#include <DPushButton>
#include <QLabel>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QGraphicsOpacityEffect>
#include <DFrame>
#include <DComboBox>
#include <DLineEdit>
#include <DTextEdit>
#include <DSwitchButton>
#include <DMessageManager>
#include <DSuggestButton>

DWIDGET_USE_NAMESPACE

class messageinquiry : public QWidget
{
    Q_OBJECT
public:
    explicit messageinquiry(QWidget *parent = nullptr);
    DFrame* createdframe();
    QHBoxLayout *createdhboxlayout();
    QLabel *createdqlabed();
    DComboBox *createddcombobox();
    DLineEdit *createdlineedit();
    ~messageinquiry();
signals:
public slots:
};

#endif // MESSAGEINQUIRY_H
