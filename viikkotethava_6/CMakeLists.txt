cmake_minimum_required(VERSION 3.16)

project(viikkotethava_6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkotethava_6 main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS viikkotethava_6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
