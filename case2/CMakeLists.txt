cmake_minimum_required(VERSION 3.14.0)
project(case2 VERSION 0.1.0)
SET(PROJ_NAME "case2")
set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
SET_PROPERTY(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS ${CMAKE_CONFIGURATION_TYPES})
SET(${PROJ_NAME}_PATH_INSTALL "~/project"   CACHE PATH "This directory contains installation Path")
SET(CMAKE_DEBUG_POSTFIX "d")

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(${PROJ_NAME} ${PROJECT_SOURCE_DIR}/src/server/server.cpp)


install(TARGETS ${PROJ_NAME} 
	DESTINATION "${${PROJ_NAME}_PATH_INSTALL}/lib${CMAKE_BUILD_TYPE}/")

