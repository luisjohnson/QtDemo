cmake_minimum_required(VERSION 3.17)
project(QtDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "/usr/local/opt/qt/lib/cmake")
find_package(Qt5Widgets REQUIRED)

add_executable(QtDemo src/main.cpp src/mainwindow.cpp src/mainwindow.h)
target_link_libraries(QtDemo Qt5::Widgets)