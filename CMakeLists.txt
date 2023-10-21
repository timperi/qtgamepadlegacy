# Generated from qtgamepad.pro.

cmake_minimum_required(VERSION 3.16)

include(.cmake.conf)
project(QtGamepad
    VERSION "${QT_REPO_MODULE_VERSION}"
    DESCRIPTION "Qt Gamepad Libraries"
    HOMEPAGE_URL "https://qt.io/"
    LANGUAGES CXX C
)

find_package(Qt6 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Core Gui)
find_package(Qt6 ${PROJECT_VERSION} CONFIG OPTIONAL_COMPONENTS Quick QuickControls2)

if(NOT TARGET Qt::Gui)
    message(NOTICE "Skipping the build as the condition \"TARGET Qt::Gui\" is not met.")
    return()
endif()
qt_build_repo()
