#pragma once

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public ExtendedMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void loadState(const LayoutSaver &_saver) override;
    virtual void saveState(LayoutSaver &_saver) const override;
    virtual void updateLanguage() override;
    virtual void updateStyle() override;
    virtual void registerCustomTypes() override;

protected:
    virtual void initUiComponets() override;
    virtual void initConnections() override;
    virtual void settingsChanged() override;

private:
    Ui::MainWindow *ui;
};
