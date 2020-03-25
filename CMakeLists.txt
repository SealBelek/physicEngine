cmake_minimum_required(VERSION 3.15)
project(project)

set(CMAKE_CXX_STANDARD 17)

add_executable(project main.cpp include/precision.h include/core.h src/core.cpp include/particle.h src/particle.cpp include/timing.h src/timing.cpp include/app.h)