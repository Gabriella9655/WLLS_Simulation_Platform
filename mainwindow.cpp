#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // initialization
    ui->setupUi(this);
    initUI();



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUI(){
    // main windows
    setWindowTitle(tr("Worm-like Locomotion System Simulation Platform"));
    setWindowIcon(QIcon(":/system/resources/icon/logo.png"));

    // navigation bar


    // stackwidget
    pWelcomePage = new WelcomePage();
    pScenePage = new ScenePage();
    pPerformancePage = new PerformancePage();
    pOptimizePage = new OptimizePage();
    pSettingPage = new SettingPage();
    pHelpPage = new HelpPage();

    ui -> stackedWidget -> addWidget(pWelcomePage);
    ui -> stackedWidget -> addWidget(pScenePage);
    ui -> stackedWidget -> addWidget(pPerformancePage);
    ui -> stackedWidget -> addWidget(pOptimizePage);
    ui -> stackedWidget -> addWidget(pSettingPage);
    ui -> stackedWidget -> addWidget(pHelpPage);
    connect(ui -> navWidget, SIGNAL(currentRowChanged(int)), ui -> stackedWidget, SLOT(setCurrentIndex(int)));

    // setCentralWidget(ui -> stackedWidget);

    // statusbar
    ui -> statusbar -> showMessage(tr("Ready!"), 3000);  // temporary message
    pStatusNormalLabel = new QLabel();
    pStatusNormalLabel->setText("Ready");     // normal message
    pStatusPermanentLabel = new QLabel();
    pStatusPermanentLabel->setText("Welcome to visit our site www.biostructure.com");    // permanent message
    ui -> statusbar -> addWidget(pStatusNormalLabel);
    ui -> statusbar -> addPermanentWidget(pStatusPermanentLabel);

    pStatusProgressBar = new QProgressBar;
    pStatusProgressBar -> setMaximumWidth(200);
    pStatusProgressBar -> setMinimum(5);
    pStatusProgressBar -> setMaximum(50);
    pStatusProgressBar ->setValue(77);
    ui -> statusbar -> addWidget(pStatusProgressBar);

}
