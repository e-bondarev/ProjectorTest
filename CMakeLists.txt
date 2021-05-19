cmake_minimum_required(VERSION 3.16)

set(PROJECTOR_PROJECT_NAME      CPProj-Project)
set(PROJECTOR_PROJECT_VERSION   0.0.1)
set(PROJECTOR_APP_NAME          Application)
set(PROJECTOR_SRC_DIR_NAME      source)

project(${PROJECTOR_PROJECT_NAME} VERSION ${PROJECTOR_PROJECT_VERSION})

file(GLOB src 
    ${PROJECTOR_SRC_DIR_NAME}/*.cxx
    ${PROJECTOR_SRC_DIR_NAME}/**/*.cxx
    ${PROJECTOR_SRC_DIR_NAME}/**/**/*.cxx
    ${PROJECTOR_SRC_DIR_NAME}/**/**/**/*.cxx
    ${PROJECTOR_SRC_DIR_NAME}/**/**/**/**/*.cxx
    ${PROJECTOR_SRC_DIR_NAME}/**/**/**/**/**/*.cxx
)

add_executable(${PROJECTOR_APP_NAME} ${src})

target_include_directories(${PROJECTOR_APP_NAME} PUBLIC ${PROJECTOR_SRC_DIR_NAME})
target_precompile_headers(${PROJECTOR_APP_NAME} PUBLIC ${PROJECTOR_SRC_DIR_NAME}/pch.hxx)

add_subdirectory(external/glfw)
target_include_directories(${PROJECTOR_APP_NAME} PUBLIC external/glfw/include)
target_link_libraries(${PROJECTOR_APP_NAME} glfw)

add_subdirectory(external/glew/build/cmake)
target_include_directories(${PROJECTOR_APP_NAME} PUBLIC external/glew/include)
target_link_libraries(${PROJECTOR_APP_NAME} glew_s)