cmake_minimum_required(VERSION 3.10)

project(PathPlanningSimulator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    planner
    src/main.cpp
    src/Grid.cpp
    src/BFS.cpp
    src/DFS.cpp
    src/Dijkstra.cpp
    src/AStar.cpp
)
