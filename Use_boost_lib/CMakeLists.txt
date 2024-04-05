cmake_minimum_required(VERSION 3.22)

set(BOOST_INCLUDE /jenkins/IWGlobalPackages/boost-headers/1.1820.1/inc/)
set(BOOST_LIBRARY_PATH /jenkins/IWGlobalPackages/boost-linux-rhel8_release_intel64_gcc1121_shared/1.1820.1/lib/)

find_library(BOOST_LIBRARY
NAMES boost_filesystem
HINTS ${BOOST_LIBRARY_PATH})


include_directories(${BOOST_INCLUDE})

target_sources(${PROJECT_NAME} PRIVATE Use_boost.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC ${BOOST_LIBRARY})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR} )