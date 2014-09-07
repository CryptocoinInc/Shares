#ifndef COMMUNITY_H
#define COMMUNITY_H

#include <QDialog>

namespace Ui {
class Community;
}

class Community : public QDialog
{
    Q_OBJECT
    
public:
    explicit Community(QWidget *parent = 0);
    ~Community();
    
private:
    Ui::Community *ui;
};

#endif // COMMUNITY_H
