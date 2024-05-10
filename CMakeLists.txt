cmake_minimum_required(VERSION 3.15)

project(OPENGL_PROJECT
    VERSION 0.1
    DESCRIPTION "A simple program/playground in C++ and OpenGL."
    LANGUAGES CXX)


# find dependencies / libraries
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

# add "app" library
add_library(app STATIC src/app.cpp)
target_include_directories(app PUBLIC include)
set_target_properties(app PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# adding executable
add_executable(main src/main.cpp)
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# linking libs
target_link_libraries(main app)
target_link_libraries(main glfw)
target_link_libraries(main glfw OpenGL::GL)