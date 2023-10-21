# Generated from xinput.pro.

#####################################################################
## QXInputGamepadBackendPlugin Plugin:
#####################################################################

qt_internal_add_plugin(QXInputGamepadBackendPlugin
    OUTPUT_NAME xinputgamepad
    PLUGIN_TYPE gamepads
    SOURCES
        main.cpp
        qxinputgamepadbackend.cpp qxinputgamepadbackend_p.h
        xinput.json
    LIBRARIES
        Qt::Core
        Qt::Gamepad
        Qt::GamepadPrivate
        Qt::Gui
)

#### Keys ignored in scope 27:.:.:xinput.pro:<TRUE>:
# OTHER_FILES = "xinput.json"
