#include "performancepage.h"
#include "ui_performancepage.h"

PerformancePage::PerformancePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PerformancePage)
{
    ui->setupUi(this);
}

PerformancePage::~PerformancePage()
{
    delete ui;
}
