#include "ledger.h"
#include "ui_ledger.h"
#include <QWebView>
#include <QUrl>

Ledger::Ledger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ledger)
{
    ui->setupUi(this);

    QWebSettings *settings = QWebSettings::globalSettings();
    settings->setAttribute (QWebSettings::PluginsEnabled, true);
    ui->webView->load(QUrl("http://cryptocoininc.com/crawler"));
    QWebView* webViewChild = new QWebView;
    webViewChild->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
}

Ledger::~Ledger()
{
    delete ui;
}
