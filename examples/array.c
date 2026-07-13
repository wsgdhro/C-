/**
 * @file array.c
 * @brief 数组与字符串示例
 *
 * 演示一维数组、二维数组和字符串操作。
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    /* 一维数组 */
    int numbers[] = {10, 20, 30, 40, 50};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    printf("一维数组：");
    for (int i = 0; i < count; i++) {
        printf(" %d", numbers[i]);
    }
    printf("\n");

    /* 二维数组 */
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    printf("\n二维数组：\n");
    for (int i = 0; i < 2; i++) {
        printf("  行 %d:", i);
        for (int j = 0; j < 3; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    /* 字符串 */
    char greeting[] = "你好，C 语言！";
    printf("\n字符串：\"%s\" (长度：%zu)\n", greeting, strlen(greeting));

    return 0;
}
