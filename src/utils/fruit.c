/**
 * @file fruit.c
 * @brief 水果相关功能实现
 */

#include <stdio.h>

#include "fruit.h"

static const char *fruit_list[] = {
    "苹果",
    "凤梨",
    "香蕉",
    "山竹",
};

static const int fruit_count = sizeof(fruit_list) / sizeof(fruit_list[0]);

void print_fruit_list(void)
{
    for (int i = 0; i < fruit_count; i++) {
        printf("  %d. %s\n", i + 1, fruit_list[i]);
    }
}
