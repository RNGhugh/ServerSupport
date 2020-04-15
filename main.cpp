#include <DApplication>
#include <DMainWindow>
#include <DWidgetUtil>
#include <DApplicationSettings>
#include "mainwindows.h"

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{

    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    /*
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    //a.setTheme("light");
    a.setOrganizationName("deepin");
    a.setApplicationName("dtk application");
    a.setApplicationVersion("1.0");
    a.setProductIcon(QIcon(":/images/logo.svg"));
    a.setProductName("Dtk Application");
    a.setApplicationDescription("This is a dtk template application.");
    */
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    //a.setTheme("light");
    a.setOrganizationName("deepin");
    a.setApplicationName("dtk-demo");
    a.setApplicationVersion("1.0");               //本地deb打包有效
    //a.setProductIcon(QIcon(":/images/logo.svg"));
    a.setProductName("Dtk Demo Application");
    a.setApplicationDescription("This is a dtk template application.");
    DApplicationSettings savetheme;

    mainwindows w;
    //w.setMinimumSize(820, 650);
    w.setFixedSize(820, 650);
    w.show();

    Dtk::Widget::moveToCenter(&w);

    return a.exec();
}
