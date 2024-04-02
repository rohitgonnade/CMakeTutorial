cmake_minimum_required (VERSION 3.17)

project (AIM)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# note : replace the path as per system and directory location
set(MY_LIBRARY_INCLUDE /jenkins/myCmake_Projects/my_library_headers/include/)
set(MY_LIBRARY_PATH /jenkins/myCmake_Projects/my_library_shared_libs/lib/)

include_directories(${MY_LIBRARY_INCLUDE})

# used to find single library .  The different arguments after NAMES represent 
# all the various names a single library could be called. This allows the command to work cross-platform, where the same library could be called different things on different platforms.
find_library(MY_CUSTOM_LIBRARY_1
NAMES my_lib
HINTS ${MY_LIBRARY_PATH})

add_executable(${PROJECT_NAME} main.cpp)
#target_link_libraries(AIM PRIVATE ${MY_LIBRARY_PATH}libMY_LIBRARY.so) #this also works
target_link_libraries(AIM PRIVATE ${MY_CUSTOM_LIBRARY_1})

add_subdirectory(use_first_lib)
add_subdirectory(use_second_lib)
add_subdirectory(use_third_lib)