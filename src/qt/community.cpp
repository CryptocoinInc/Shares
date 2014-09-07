#include "community.h"
#include "ui_community.h"

Community::Community(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Community)
{
    ui->setupUi(this);

    QWebSettings *settings = QWebSettings::globalSettings();
    settings->setAttribute (QWebSettings::PluginsEnabled, true);
    ui->webView->load(QUrl("https://cryptocoininc.com/forums/"));
    QWebView* webViewChild = new QWebView;
    webViewChild->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
}

Community::~Community()
{
    delete ui;
}
