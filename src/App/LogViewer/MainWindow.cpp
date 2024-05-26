#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : ExtendedMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initAll();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadState(const LayoutSaver &_saver) {}

void MainWindow::saveState(LayoutSaver &_saver) const {}

void MainWindow::updateLanguage() {}

void MainWindow::updateStyle() {}

void MainWindow::registerCustomTypes() {}

void MainWindow::initUiComponets() {}

void MainWindow::initConnections() {}

void MainWindow::settingsChanged() {}
