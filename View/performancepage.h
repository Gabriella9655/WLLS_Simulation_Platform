#ifndef PERFORMANCEPAGE_H
#define PERFORMANCEPAGE_H

#include <QWidget>

namespace Ui {
class PerformancePage;
}

class PerformancePage : public QWidget
{
    Q_OBJECT

public:
    explicit PerformancePage(QWidget *parent = nullptr);
    ~PerformancePage();

private:
    Ui::PerformancePage *ui;
};

#endif // PERFORMANCEPAGE_H
