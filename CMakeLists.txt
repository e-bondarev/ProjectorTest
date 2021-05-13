cmake_minimum_required(VERSION 3.16)

set(PROJECTOR_PROJECT_NAME      ProjectorProject)
set(PROJECTOR_PROJECT_VERSION   0.0.1)
set(PROJECTOR_APP_NAME          ProjectorApp)

project(${PROJECTOR_PROJECT_NAME} VERSION ${PROJECTOR_PROJECT_VERSION})

file(GLOB src 
    src/*.cpp
    src/**/*.cpp
    src/**/**/*.cpp
    src/**/**/**/*.cpp
    src/**/**/**/**/*.cpp
    src/**/**/**/**/**/*.cpp
)

add_executable(${PROJECTOR_APP_NAME} ${src})

target_include_directories(${PROJECTOR_APP_NAME} PUBLIC src)
target_precompile_headers(${PROJECTOR_APP_NAME} PUBLIC src/pch.h)
