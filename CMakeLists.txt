cmake_minimum_required (VERSION 3.17)

project (AIM)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# note : replace the path as per system and directory location
set(MY_LIBRARY_INCLUDE /jenkins/myCmake_Projects/my_library_headers/include/)
set(MY_LIBRARY_PATH /jenkins/myCmake_Projects/my_library_shared_libs/lib/)

include_directories(${MY_LIBRARY_INCLUDE})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${BOOST_LIBRARY})

add_subdirectory(use_first_lib)
add_subdirectory(use_second_lib)
add_subdirectory(Use_boost_lib)