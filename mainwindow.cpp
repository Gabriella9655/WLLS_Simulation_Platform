#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // initialization


    // appearance
    ui->setupUi(this);
    setWindowTitle(tr("Worm-like Locomotion System Simulation Platform"));
    setWindowIcon(QIcon(":/system/resources/icon/logo.png"));

    // navigation bar
    pNavigationBar = ui -> listWidget;
    pNavigationBar ->setViewMode(QListView::ListMode);

    // statusbar
    pStatusBar = ui -> statusbar;
    pStatusBar -> showMessage(tr("Ready!"), 3000);  // temporary message
    pStatusNormalLabel = new QLabel();
    pStatusNormalLabel->setText("Ready");     // normal message
    pStatusPermanentLabel = new QLabel();
    pStatusPermanentLabel->setText("Welcome to visit our site www.biostructure.com");    // permanent message
    pStatusBar -> addWidget(pStatusNormalLabel);
    pStatusBar -> addPermanentWidget(pStatusPermanentLabel);

    // stackwidget
    pStackedWidget = ui ->stackedWidget;
    pStackedWidget -> addWidget(new QLabel(tr("Test1")));
    pStackedWidget -> addWidget(new QLabel(tr("Test2")));
    pStackedWidget -> addWidget(new QLabel(tr("Test3")));
    pStackedWidget -> addWidget(new QLabel(tr("Test4")));
}

MainWindow::~MainWindow()
{
    delete ui;
}

