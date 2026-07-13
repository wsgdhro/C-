/**
 * @file pointer.c
 * @brief 指针基础示例
 *
 * 演示指针声明、取值、传参和指针运算。
 */

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 42;
    int *p = &x;

    printf("变量 x = %d\n", x);
    printf("指针 p 指向的地址: %p\n", (void *)p);
    printf("解引用 *p = %d\n", *p);

    /* 指针传参 */
    int a = 10, b = 20;
    printf("\n交换前: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("交换后: a = %d, b = %d\n", a, b);

    /* 数组与指针 */
    int arr[] = {100, 200, 300};
    int *q = arr;

    printf("\n数组遍历（指针）：\n");
    for (int i = 0; i < 3; i++) {
        printf("  arr[%d] = %d (地址: %p)\n", i, *(q + i), (void *)(q + i));
    }

    return 0;
}
