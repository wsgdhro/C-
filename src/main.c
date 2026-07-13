/**
 * @file main.c
 * @brief C 语言学习项目 - 主入口
 */

#include <stdio.h>
#include <stdlib.h>

#include "fruit.h"

int main(void)
{
    printf("========== C 语言学习项目 ==========\n\n");

    printf("水果列表：\n");
    print_fruit_list();

    printf("\n===================================\n");
    return EXIT_SUCCESS;
}
