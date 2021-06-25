#ifndef NAVIGATE_H
#define NAVIGATE_H

#include <QMainWindow>

namespace Ui {
class Navigate;
}

class Navigate : public QMainWindow
{
    Q_OBJECT

public:
    explicit Navigate(QWidget *parent = nullptr);
    ~Navigate();

private:
    Ui::Navigate *ui;
};

#endif // NAVIGATE_H
