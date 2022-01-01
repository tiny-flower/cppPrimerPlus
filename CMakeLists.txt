cmake_minimum_required(VERSION 3.20)
project(c__pp)

set(CMAKE_CXX_STANDARD 14)

add_executable(c__pp main.cpp )

file(GLOB LCA_PLAY "/home/kk/.config/JetBrains/CLion2021.3/practices/Workspace/Playground.cpp")
add_executable(lca-play ${LCA_PLAY})