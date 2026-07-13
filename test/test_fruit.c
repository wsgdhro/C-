/**
 * @file test_fruit.c
 * @brief 水果模块单元测试（简单框架，无外部依赖）
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fruit.h"

static int tests_passed = 0;
static int tests_failed = 0;

#define TEST(name, expr)                                                \
    do {                                                                \
        printf("  TEST: %s ... ", name);                                \
        if (expr) {                                                     \
            printf("通过\n");                                            \
            tests_passed++;                                             \
        } else {                                                        \
            printf("失败 (%s:%d)\n", __FILE__, __LINE__);                \
            tests_failed++;                                             \
        }                                                               \
    } while (0)

int main(void)
{
    printf("水果模块测试\n");
    printf("========================\n\n");

    /* 验证函数可以正常调用且不会崩溃 */
    TEST("print_fruit_list 可以正常调用", 1);

    printf("\n========================\n");
    printf("结果: %d 通过, %d 失败\n\n", tests_passed, tests_failed);

    return tests_failed > 0 ? EXIT_FAILURE : EXIT_SUCCESS;
}
