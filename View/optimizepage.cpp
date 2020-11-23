#include "optimizepage.h"
#include "ui_optimizepage.h"

OptimizePage::OptimizePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OptimizePage)
{
    ui->setupUi(this);
}

OptimizePage::~OptimizePage()
{
    delete ui;
}
