cmake_minimum_required(VERSION 3.16)

project(viikkotehtava_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkotehtava_2 main.cpp
    Game.h Game.cpp)

include(GNUInstallDirs)
install(TARGETS viikkotehtava_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
