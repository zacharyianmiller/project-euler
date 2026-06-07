cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME project-euler)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_SOURCE_DIR}/src/main.cpp
)

target_include_directories(project-euler PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/libs
)

# External libraries
add_subdirectory(libs/mldsp-utils)
target_link_libraries(${PROJECT_NAME} PRIVATE mldsp-utils)
# target_include_directories(mldsp-utils PUBLIC ${CMAKE_SOURCE_DIR}/libs)