cmake_minimum_required(VERSION 3.5)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)

if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support.")
endif()


set(NAME_APP monotone_chain_test )

add_subdirectory(${PROJECT_SOURCE_DIR}/monotone_chain/)
include_directories(${PROJECT_SOURCE_DIR}/monotone_chain/)

add_executable( ${NAME_APP} main.cpp)
target_link_libraries( ${NAME_APP} monotonechain)

