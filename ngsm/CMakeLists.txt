# CMakeList.txt: ngsm 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.21)

set(LIBRARY_NAME ngsm)
message("Building library: ${LIBRARY_NAME}")

# 添加头文件目录
include_directories(
    .
)

# 将源代码添加到此项目的可执行文件。
aux_source_directory(. project_src)

add_library(
    ${LIBRARY_NAME}
    SHARED
    ${project_src}
)

target_link_libraries(${LIBRARY_NAME} log)
