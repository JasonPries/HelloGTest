

project(HelloGTest)

#TODO: Make two seperate builds? One without code coverage

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -o0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")

include_directories(Line)

add_subdirectory(Line)
add_subdirectory(Line_Test)