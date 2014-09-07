#include "ccexbox.h"
#include "ui_ccexbox.h"
#include <QWebView>
#include <QUrl>
CCexBox::CCexBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CCexBox)
{
    ui->setupUi(this);
    
    QWebSettings *settings = QWebSettings::globalSettings();
	settings->setAttribute (QWebSettings::PluginsEnabled, true);
    ui->webView->load(QUrl("https://c-cex.com"));
    QWebView* webViewChild = new QWebView;
    webViewChild->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
}

CCexBox::~CCexBox()
{
    delete ui;
}
