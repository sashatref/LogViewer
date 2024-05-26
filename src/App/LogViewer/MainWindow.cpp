#include "MainWindow.h"
#include "buildNumber.h"
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

void MainWindow::loadState(const LayoutSaver &_saver)
{
    _saver.loadMainWindow(this, "mw");
    _saver.load(m_lastOpenedDocPath, "lastOpenedDocPath");
}

void MainWindow::saveState(LayoutSaver &_saver) const
{
    _saver.saveMainWindow(this, "mw");
    _saver.save(m_lastOpenedDocPath, "lastOpenedDocPath");
}

void MainWindow::updateLanguage()
{
    ui->retranslateUi(this);
}

void MainWindow::updateStyle() {}

void MainWindow::registerCustomTypes() {}

void MainWindow::initUiComponets()
{
    qApp->langugeHelper()->createActions(ui->menuLanguage, s.m_language);
}

void MainWindow::initConnections() {}

void MainWindow::settingsChanged() {}

void MainWindow::on_actionAboutApp_triggered()
{
    HelperLibraryNS::AboutDialog dialog(this);
    dialog.setInfo(qApp->applicationName(), FULL_VER, COMPILE_DATETIME);
    dialog.exec();
}

void MainWindow::on_actionOpen_triggered()
{
    const QString path = QFileDialog::getOpenFileName(this, tr("Select file"), m_lastOpenedDocPath);
    if (path.isEmpty()) {
        return;
    }

    m_lastOpenedDocPath = path;

    openFile(path);
}

void MainWindow::openFile(const QString &path)
{
    QPlainTextEdit *edit = new QPlainTextEdit(this);
    edit->setWindowTitle(path);
    QFile f(path);
    f.open(QIODevice::ReadOnly);
    edit->setPlainText(QString::fromUtf8(f.readAll()));

    QMdiSubWindow *subW = ui->mdiArea->addSubWindow(edit);
    edit->show();
}
