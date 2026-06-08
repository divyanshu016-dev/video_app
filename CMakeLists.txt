cmake_minimum_required(VERSION 3.10)
project(video_app)

# 1. Add glad.c right next to main.cpp!
add_executable(video_app src/main.cpp src/gl.c)

add_subdirectory(lib/glfw)
find_package(OpenGL REQUIRED) 

target_link_libraries(video_app PRIVATE glfw OpenGL::GL)

# 2. Force the compiler to look in your new include folder
target_include_directories(video_app PRIVATE include)