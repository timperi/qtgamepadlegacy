# Generated from src.pro.

#####################################################################
## QAndroidGamepadBackendPlugin Plugin:
#####################################################################

qt_internal_add_plugin(QAndroidGamepadBackendPlugin
    OUTPUT_NAME androidgamepad
    PLUGIN_TYPE gamepads
    SOURCES
        main.cpp
        qandroidgamepadbackend.cpp qandroidgamepadbackend_p.h
        android.json
    LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::Gamepad
        Qt::GamepadPrivate
        Qt::Gui
)

#### Keys ignored in scope 17:.:.:src.pro:<TRUE>:
# DISTFILES = "android.json"
