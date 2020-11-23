#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QListWidget>
#include <QStackedWidget>

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
    QMenuBar* pMenuBar;
    QMenu* pFileMenu;
    QMenu* pEditMenu;
    QMenu* pAddMenu;
    QMenu* pSimulationMenu;
    QMenu* pToolsMenu;
    QMenu* pPluginsMenu;
    QMenu* pHelpMenu;

    // 组件
    QStackedWidget* pStackedWidget;

    // 左侧功能栏
    QListWidget* pNavigationBar;

    // 底部状态栏
    QStatusBar* pStatusBar;
    QLabel* pStatusNormalLabel;
    QLabel* pStatusPermanentLabel;
};
#endif // MAINWINDOW_H
