#ifndef OPTIMIZEPAGE_H
#define OPTIMIZEPAGE_H

#include <QWidget>

namespace Ui {
class OptimizePage;
}

class OptimizePage : public QWidget
{
    Q_OBJECT

public:
    explicit OptimizePage(QWidget *parent = nullptr);
    ~OptimizePage();

private:
    Ui::OptimizePage *ui;
};

#endif // OPTIMIZEPAGE_H
