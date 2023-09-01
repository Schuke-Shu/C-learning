//
// Created by schuke on 2023/8/2.
//
#include <stdio.h>

void test();
void base();
void pointer();

int main()
{
    test();
    return 0;
}

void test()
{
//    base();
    pointer();
}

// 基础
void base()
{
    int a = 1; // 声明变量
    printf("%d", a);
    int b = 0;
    printf("%d", b);

    // 单行注释
    /*
     * 多行注释
     * 多行注释
     */
    // 注释内容会被编译器忽略
}

// 指针
void pointer()
{
    int i = 1;
    int* p = &i; // '&'为取地址符号
    printf("number i: %d, pointer: %p, pointer address: %p\n", i, p, &p);

    printf("pointer: %p, value pointed by the pointer: %d, the pointer that point to pointer: %p\n", p, *p, &p);

    *p = 10;
    // 改变指针指向的值，原来的变量i也被改变
    printf("pointer: %p, value pointed by the pointer: %d, the pointer that point to pointer: %p, number i: %d\n", p, *p, &p, i);
}