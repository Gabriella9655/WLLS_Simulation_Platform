#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QListWidget>
#include <QStackedWidget>
#include <QProgressBar>
#include "View/welcomepage.h"
#include "View/scenepage.h"
#include "View/performancepage.h"
#include "View/optimizepage.h"
#include "View/settingpage.h"
#include "View/helppage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   void createActions();                  // 创建动作
   void createMenus();                    //创建菜单

private:
    Ui::MainWindow *ui;
    // 顶部菜单栏

    // 组件


    // 左侧功能栏

    // stackedwidget
    WelcomePage* pWelcomePage;
    ScenePage* pScenePage;
    PerformancePage* pPerformancePage;
    OptimizePage* pOptimizePage;
    SettingPage* pSettingPage;
    HelpPage* pHelpPage;



    // 底部状态栏
    QLabel* pStatusNormalLabel;
    QLabel* pStatusPermanentLabel;
    QProgressBar *pStatusProgressBar;

    void initUI();  // initialize th graphic user interface
};
#endif // MAINWINDOW_H
