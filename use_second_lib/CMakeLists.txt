cmake_minimum_required (VERSION 3.22)

# used to find single library .  The different arguments after NAMES represent 
# all the various names a single library could be called. This allows the command to work cross-platform, where the same library could be called different things on different platforms.
find_library(MY_CUSTOM_LIBRARY_2
NAMES SECOND_SHARED_LIB
HINTS ${MY_LIBRARY_PATH})

target_sources(${PROJECT_NAME} PRIVATE Use_Second_class.cpp)
#target_link_libraries(AIM PRIVATE ${MY_LIBRARY_PATH}libMY_LIBRARY.so) #this also works
target_link_libraries(AIM PRIVATE ${MY_CUSTOM_LIBRARY_2})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR})