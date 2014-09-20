#ifndef LEDGER_H
#define LEDGER_H

#include <QDialog>

namespace Ui {
class Ledger;
}

class Ledger : public QDialog
{
    Q_OBJECT
    
public:
    explicit Ledger(QWidget *parent = 0);
    ~Ledger();


private:
    Ui::Ledger *ui;
};

#endif // LEDGER_H
