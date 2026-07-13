# 测试用简单断言框架（不依赖外部库）
add_executable(test_fruit
    test_fruit.c
    ${CMAKE_SOURCE_DIR}/src/utils/fruit.c
)

target_include_directories(test_fruit PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_test(NAME test_fruit COMMAND test_fruit)
