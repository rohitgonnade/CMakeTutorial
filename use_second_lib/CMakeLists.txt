cmake_minimum_required (VERSION 3.22)

target_sources(${PROJECT_NAME} PRIVATE Use_Second_class.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR})