#ifndef SCENEPAGE_H
#define SCENEPAGE_H

#include <QWidget>
#include <QSplitter>
#include <QTextEdit>
namespace Ui {
class ScenePage;
}

class ScenePage : public QWidget
{
    Q_OBJECT

public:
    explicit ScenePage(QWidget *parent = nullptr);
    ~ScenePage();

private:
    Ui::ScenePage *ui;
    QSplitter* pSplitterMain;
    QSplitter* pModelBrowser;
    QSplitter* pSceneLog;
    QTextEdit* textRight;
    QTextEdit* textUp;
    QTextEdit* textDown;
    void initUI();
};

#endif // SCENEPAGE_H
