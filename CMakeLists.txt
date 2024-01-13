cmake_minimum_required(VERSION 3.5)

project(14_Longest_Common_Prefix LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(14_Longest_Common_Prefix main.cpp)

include(GNUInstallDirs)
install(TARGETS 14_Longest_Common_Prefix
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
