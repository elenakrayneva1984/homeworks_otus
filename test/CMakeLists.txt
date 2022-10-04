cmake_minimum_required(VERSION 3.2)

set(This VersionTest)

set(Sources
    VersionTest.cpp
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