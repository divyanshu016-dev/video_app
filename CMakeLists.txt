cmake_minimum_required(VERSION 3.10)
project(video_app)

# ImGui requires at least C++11, but let's use modern C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# This automatically grabs all the ImGui .cpp files so we can compile them
file(GLOB IMGUI_SOURCES "include/imgui/*.cpp")

# Add the ImGui files alongside your main and glad files
add_executable(video_app src/main.cpp src/gl.c ${IMGUI_SOURCES})

add_subdirectory(lib/glfw)
find_package(OpenGL REQUIRED) 

target_link_libraries(video_app PRIVATE glfw OpenGL::GL)

# This makes sure the compiler can find your <imgui.h> headers
target_include_directories(video_app PRIVATE include include/imgui)