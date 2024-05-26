#pragma once

#include <QObject>

#include <helperLibrary/setgetMacro.h>
#include <helperLibrary/converterfunctions.h>

#include <PropertyBrowser3/ipropertyinfomap.h>

using namespace PropertyBrowser3Qt;

class SettingsInfo : public IGadget, public IPropertyBrowserBase
{
    Q_GADGET
    DEFINE_MO
    Q_PROPERTY(QString language MEMBER m_language)
public:
    virtual void propertyInfoMap(PropertyInfoMapType &m) const override;

    static void registerType();

    QString m_language = "en";
};

Q_DECLARE_METATYPE(SettingsInfo)

using sgSettings = Singleton<SettingsInfo>;
