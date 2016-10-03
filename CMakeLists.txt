

project(HelloGTest)

#TODO: Make two seperate builds? One without code coverage

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 --coverage")

include_directories(Line)

add_subdirectory(Line)
add_subdirectory(Line_Test)
