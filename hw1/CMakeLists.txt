cmake_minimum_required(VERSION 3.16)
project(hw1 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
qt_standard_project_setup()

add_subdirectory(_task1)
add_subdirectory(_task2)