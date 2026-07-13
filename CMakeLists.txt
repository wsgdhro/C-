cmake_minimum_required(VERSION 3.15)

project(CLanguage
    VERSION 1.0.0
    DESCRIPTION "C 语言学习项目"
    LANGUAGES C
)

# C 标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# 输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)

# ========== 主程序 ==========
add_executable(clearn
    src/main.c
    src/utils/fruit.c
)

# ========== 测试（启用 CTest） ==========
option(BUILD_TESTS "构建测试" ON)
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
