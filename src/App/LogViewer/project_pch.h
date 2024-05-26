#pragma once

#include <QDebug>
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QPlainTextEdit>
#include <QStandardPaths>
#include <QStyleFactory>
#include <QtPlugin>
#include <functional>

#include <PropertyBrowser3/settingsform.h>
#include <PropertyBrowser3/Editors/editorproperties.h>
#include <PropertyBrowser3/propertybrowser3.h>

#include <HelperLibrary/ExtendApp/extendapp.h>
#include <HelperLibrary/FileBasedProject/FileBasedProject.h>
#include <HelperLibrary/IGadget/igadget.h>
#include <HelperLibrary/LanguageHelper/languagehelper.h>
#include <HelperLibrary/Widgets/TrayMenu/traymenu.h>
#include <HelperLibrary/Widgets/aboutdialog.h>
#include <HelperLibrary/Widgets/extendedmainwindow.h>
#include <HelperLibrary/Widgets/infowindow.h>
#include <HelperLibrary/functions.h>
#include <HelperLibrary/singleton.hpp>
