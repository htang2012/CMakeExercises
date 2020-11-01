cmake_minimum_required(VERSION 3.14.0)
project(case2 VERSION 0.1.0)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(applib ${PROJECT_SOURCE_DIR}/lib/lib.cpp)

add_executable(app ${PROJECT_SOURCE_DIR}/src/server/server.cpp)
target_link_libraries(app applib)


