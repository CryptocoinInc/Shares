#include "chatbox.h"
#include "ui_chatbox.h"
#include <QWebView>
#include <QUrl>
ChatBox::ChatBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatBox)
{
    ui->setupUi(this);

    QWebSettings *settings = QWebSettings::globalSettings();
    settings->setAttribute (QWebSettings::PluginsEnabled, true);
    ui->webView->load(QUrl("http://cryptocoininc.com:8080/?channels=ccishares&uio=d4"));
    QWebView* webViewChild = new QWebView;
    webViewChild->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
}

ChatBox::~ChatBox()
{
    delete ui;
}
