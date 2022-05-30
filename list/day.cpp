#include <stdio.h>
#include <string.h>
#include "overall.cpp"
// 声明外部函数
extern int Add(int, int);
int main()
{
    int number =12;
    // 有一种变量是用来存放地址的----指针变量
    int* p = &number;
    printf("number=%d\n",number);
    *p=20; // *解引用操作符
    printf("%d\n",number);
    printf("%p\n",&number);
    printf("%p\n",p);
    printf("%d\n",sizeof(p));//p八个字节说明我的电脑是64位。一个地址值的内存是8个字节大小。  

    





    // extern int global;
    // printf("global:%d\n", global);
    // int a = 12;
    // int b = 163;
    // int sum = Add(a, b);
    // printf("%d和%d的和为：%d", a, b, sum);



    // typedef unsigned int u_int;
    // unsigned int num1 = 1; //无符号整数
    // u_int num2=2;   //num1和num2都是无符号整数

    return 0;
}