cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME project-euler)
project(${PROJECT_NAME} VERSION 0.0.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(project-euler)

target_sources(${PROJECT_NAME}
    PRIVATE
        src/main.cpp 
)