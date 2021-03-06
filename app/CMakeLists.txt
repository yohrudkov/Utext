cmake_minimum_required(VERSION 3.18.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(NAME utext)
set(SOURCE_EXE main.cpp resources/resources.qrc)
set(UI src/MainWindow.ui src/SubWindow.ui src/Search.ui src/Message.ui)

project(${NAME})

add_compile_options(
    -Wall
    -Wextra
    -Werror
    -Wpedantic
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

include_directories(
    ./src
)

add_subdirectory(src)
add_executable(${NAME} ${SOURCE_EXE})

target_link_libraries(${NAME} app Qt5::Widgets Qt5::Core)
