cmake_minimum_required(VERSION 3.21)

project(CounterExample LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Qml Quick)
qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(CounterExample
    main.cpp
)

qt_add_qml_module(CounterExample
    URI CounterExample
    VERSION 1.0
    SOURCES
        Counter.h
    QML_FILES
        Main.qml
)

target_link_libraries(CounterExample PRIVATE Qt6::Quick)
