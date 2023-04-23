cmake_minimum_required(VERSION 3.23)
project(xrandrGUI)

## find packages
find_package( Qt6 REQUIRED COMPONENTS Widgets)
find_package( Qt6 REQUIRED COMPONENTS Gui)
find_package( Qt6 REQUIRED COMPONENTS Core)
qt_standard_project_setup()

## add sub directories
include_directories(ui)

## create executables and link
set(SOURCES	src/main.cpp 
		src/main_window.cpp
		ui/main_window.h
		ui/ui_xrandr_gui.h)

add_executable(${PROJECT_NAME}
    ${SOURCES}
)
target_link_libraries(${PROJECT_NAME}
    Qt6::Widgets
    Qt6::Gui
    Qt6::Core
)
