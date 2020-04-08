cmake_minimum_required(VERSION 3.15)
project(project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lGL -lGLU -lglut")
set(CMAKE_CXX_STANDARD 17)


add_executable(project main.cpp include/precision.h include/core.h src/core.cpp include/particle.h src/particle.cpp include/timing.h src/timing.cpp include/app.h include/phisicEngine.h src/app.cpp include/demo/ballistic.h src/demo/ballistic.cpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})