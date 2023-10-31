#ifndef QTGAMEPADQUICKTYPES_P_H
#define QTGAMEPADQUICKTYPES_P_H

#include <QtQml/qqml.h>
#include <QtGamepadLegacy/QtGamepadLegacy>

#include "qgamepadmouseitem.h"
#include "qjsengine.h"

QT_BEGIN_NAMESPACE

struct QGamepadManagerForeign
{
    Q_GADGET
    QML_SINGLETON
    QML_FOREIGN(QGamepadManager)
    QML_NAMED_ELEMENT(GamepadManager)
public:
    static QGamepadManager *create(QQmlEngine *, QJSEngine *engine)
    {
        auto *inst = QGamepadManager::instance();
        Q_ASSERT(inst->thread() == engine->thread());
        QJSEngine::setObjectOwnership(inst, QJSEngine::CppOwnership);
        return inst;
    }
};

struct QGamepadForeign
{
    Q_GADGET
    QML_FOREIGN(QGamepad)
    QML_NAMED_ELEMENT(Gamepad)
};

struct QGamepadKeyNavigationForeign
{
    Q_GADGET
    QML_FOREIGN(QGamepadKeyNavigation)
    QML_NAMED_ELEMENT(GamepadKeyNavigation)
};

struct QGamepadMouseItemForeign
{
    Q_GADGET
    QML_FOREIGN(QGamepadMouseItem)
    QML_NAMED_ELEMENT(GamepadMouseItem)
};

QT_END_NAMESPACE

#endif
