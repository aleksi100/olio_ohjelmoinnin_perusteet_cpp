cmake_minimum_required(VERSION 3.16)

project(viikkotehtava_5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkotehtava_5 main.cpp

    notifikaattori.h notifikaattori.cpp
    seuraaja.h seuraaja.cpp)

include(GNUInstallDirs)
install(TARGETS viikkotehtava_5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
