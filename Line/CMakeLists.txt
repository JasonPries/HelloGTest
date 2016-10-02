project(Line)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Line.cpp Line.hpp)

add_library(Line STATIC ${SOURCE_FILES})