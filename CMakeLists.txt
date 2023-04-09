cmake_minimum_required(VERSION 3.3)

project(ATM)
include_directories(
    include
    )
add_executable(ATM
    src/Account.cpp
    src/main.cpp
)
