cmake_minimum_required(VERSION 3.16)

set(PROJECTOR_PROJECT_NAME      ProjectorProject)
set(PROJECTOR_PROJECT_VERSION   0.0.1)
set(PROJECTOR_APP_NAME          ProjectorApp)
set(PROJECTOR_SRC_DIR_NAME      Source)

project(${PROJECTOR_PROJECT_NAME} VERSION ${PROJECTOR_PROJECT_VERSION})

file(GLOB src 
    ${PROJECTOR_SRC_DIR_NAME}/*.cpp
    ${PROJECTOR_SRC_DIR_NAME}/**/*.cpp
    ${PROJECTOR_SRC_DIR_NAME}/**/**/*.cpp
    ${PROJECTOR_SRC_DIR_NAME}/**/**/**/*.cpp
    ${PROJECTOR_SRC_DIR_NAME}/**/**/**/**/*.cpp
    ${PROJECTOR_SRC_DIR_NAME}/**/**/**/**/**/*.cpp
)

add_executable(${PROJECTOR_APP_NAME} ${src})

target_include_directories(${PROJECTOR_APP_NAME} PUBLIC ${PROJECTOR_SRC_DIR_NAME})
target_precompile_headers(${PROJECTOR_APP_NAME} PUBLIC ${PROJECTOR_SRC_DIR_NAME}/Pch.h)

add_subdirectory(External/glfw)
target_link_libraries(${PROJECTOR_APP_NAME} glfw)
target_include_directories(${PROJECTOR_APP_NAME} PUBLIC External/glfw/include)

add_subdirectory(External/glew/build/cmake)
target_link_libraries(${PROJECTOR_APP_NAME} glew_s)
target_include_directories(${PROJECTOR_APP_NAME} PUBLIC External/glew/include)