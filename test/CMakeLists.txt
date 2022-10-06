cmake_minimum_required(VERSION 3.2)

set(This version_test)

set(Sources
    version_test.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    helloworld
)
add_test(
    NAME ${This}
    COMMAND ${This}
)