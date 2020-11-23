#include "scenepage.h"
#include "ui_scenepage.h"

ScenePage::ScenePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScenePage)
{
    ui->setupUi(this);
    initUI();

}

ScenePage::~ScenePage()
{
    delete ui;
}

void ScenePage::initUI(){
    pSplitterMain = new QSplitter(Qt::Horizontal, this);
    // pSplitterMain -> setGeometry(0, 0, 1140, 840);
    pSplitterMain -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pSplitterMain -> setMinimumSize(340, 240);
    textRight = new QTextEdit(QObject::tr("Model directory"), pSplitterMain);
    textRight -> setAlignment(Qt::AlignCenter);
    textRight -> setMinimumSize(150, 240);

    pSceneLog = new QSplitter(Qt::Vertical, pSplitterMain);
    pSceneLog -> setOpaqueResize(false);
    textUp = new QTextEdit(QObject::tr("scene animation"), pSceneLog);
    textUp -> setAlignment(Qt::AlignCenter);
    textUp -> setMaximumSize(150, 120);
    textDown = new QTextEdit(QObject::tr("logs"), pSceneLog);
    textDown -> setAlignment(Qt::AlignCenter);
    textDown -> setMinimumSize(150, 120);
    pSplitterMain -> setWindowTitle(QObject::tr("Scene Name"));
    pSplitterMain -> show();
}
