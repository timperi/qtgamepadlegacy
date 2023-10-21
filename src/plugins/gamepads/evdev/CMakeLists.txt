# Generated from evdev.pro.

#####################################################################
## QEvdevGamepadBackendPlugin Plugin:
#####################################################################

find_package(Qt6 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS DeviceDiscoverySupportPrivate)

qt_internal_add_plugin(QEvdevGamepadBackendPlugin
    OUTPUT_NAME evdevgamepad
    PLUGIN_TYPE gamepads
    SOURCES
        main.cpp
        qevdevgamepadbackend.cpp qevdevgamepadbackend_p.h
        evdev.json
    LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::DeviceDiscoverySupportPrivate
        Qt::Gamepad
        Qt::GamepadPrivate
        Qt::Gui
)

#### Keys ignored in scope 19:.:.:evdev.pro:<TRUE>:
# OTHER_FILES = "evdev.json"
