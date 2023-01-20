# CMakeList.txt: 顶层 CMageoke 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.15)

set(curr_dir ${CMAKE_CURRENT_SOURCE_DIR})
set(lib_dir ${curr_dir}/3rd_party)
set(utils_dir ${curr_dir}/src/utils)
set(render_dir ${curr_dir}/src/render)
set(shader_dir ${curr_dir}/src/shader)

project(main)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Debug和Release output dir
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/out)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/out)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/out)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/out)

# external library
include_directories(${lib_dir}/include)

# Add header file include directories
include_directories(
    ${utils_dir}
    ${render_dir}
    ${shader_dir}
)

# Add block directories
add_subdirectory(src/utils)
add_subdirectory(src/render)
add_subdirectory(src/shader)

# Target
add_executable(main "src/main.cpp")
target_link_libraries(main render utils shader ${lib_dir}/libs/assimp.lib ${lib_dir}/libs/glfw3.lib)