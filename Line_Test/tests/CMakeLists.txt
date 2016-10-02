project(tests)

add_executable(run_tests
        line_tests.cpp)

target_link_libraries(run_tests gtest gtest_main)
target_link_libraries(run_tests Line)