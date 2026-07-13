/**
 * @file loop.c
 * @brief 循环控制流示例
 *
 * 演示 for、while、do-while 循环。
 */

#include <stdio.h>

int main(void)
{
    printf("1) for 循环：1 到 5\n");
    for (int i = 1; i <= 5; i++) {
        printf("   %d\n", i);
    }

    printf("\n2) while 循环：5 到 1\n");
    int j = 5;
    while (j > 0) {
        printf("   %d\n", j);
        j--;
    }

    printf("\n3) do-while 循环：执行一次\n");
    int k = 0;
    do {
        printf("   k = %d\n", k);
        k++;
    } while (k < 1);

    return 0;
}
