cmake_minimum_required(VERSION 3.14.0)

project(pie_test)

#shared-lib as executable
add_library(${PROJECT_NAME} SHARED
            test.cpp
)
target_compile_options(${PROJECT_NAME} PUBLIC "-pie")
target_link_libraries(${PROJECT_NAME} "-pie -Wl,-E")
set_property(TARGET ${PROJECT_NAME} PROPERTY POSITION_INDEPENDENT_CODE 1)

#executable linking to the executable-shared-library
add_executable(test_test
               ttest/test_test.cpp
)
target_link_libraries(test_test pie_test)
set_property(TARGET test_test PROPERTY POSITION_INDEPENDENT_CODE 1)
