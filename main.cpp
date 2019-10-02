#include <DApplication>
#include <DMainWindow>
#include <DWidgetUtil>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    a.setTheme("dark");
    a.setOrganizationName("deepin en español");
    a.setApplicationName("Deepin ClamAV");
    a.setApplicationVersion("0.1");
    a.setProductIcon(QIcon(":/icons/deepin-clamav.svg"));
    a.setProductName("Deepin ClamAV");
    a.setApplicationDescription("This is a deepin clamav application.");

    DMainWindow w;
    w.setMinimumSize(700, 500);
    w.show();

    Dtk::Widget::moveToCenter(&w);

    return a.exec();
}
