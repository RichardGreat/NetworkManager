cmake_minimum_required(VERSION 3.15)
project(Core)

set(CMAKE_CXX_STANDARD 14)

add_library(Core SHARED NetworkManager.cpp NetworkManager.h)