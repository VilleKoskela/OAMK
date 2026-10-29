cmake_minimum_required(VERSION 3.16)

project(Osoitin_testailua LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Osoitin_testailua main.cpp)

include(GNUInstallDirs)
install(TARGETS Osoitin_testailua
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
