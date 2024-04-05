cmake_minimum_required (VERSION 3.17)


# used to find single library .  The different arguments after NAMES represent 
# all the various names a single library could be called. This allows the command to work cross-platform, where the same library could be called different things on different platforms.
find_library(MY_CUSTOM_LIBRARY_1
NAMES FIRST_SHARED_LIB
HINTS ${MY_LIBRARY_PATH})

target_sources(${PROJECT_NAME} PRIVATE Use_First_class.cpp)

#target_link_libraries(AIM PRIVATE ${MY_LIBRARY_PATH}libMY_LIBRARY.so) #this also works
target_link_libraries(AIM PRIVATE ${MY_CUSTOM_LIBRARY_1})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR})