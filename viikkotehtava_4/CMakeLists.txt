cmake_minimum_required(VERSION 3.16)

project(viikkotehtava_4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkotehtava_4 main.cpp
    tilit.h tilit.cpp
    asiakas.h asiakas.cpp)

include(GNUInstallDirs)
install(TARGETS viikkotehtava_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
