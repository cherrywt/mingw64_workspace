#include <stdio.h>
// int main ()
// {
//     int a =2;
//     int b= a>>1;
//     printf("%d\n",b);

//     /*
//     举例-8     （第一位不变一直是1）
//     10000000  00000000  00000000  00001000  原码
//     11111111  11111111  11111111  11110111  反码
//     11111111  11111111  11111111  11111000  补码
//     如果算术右移
//     11111111  11111111  11111111  11111100|0  完事之后
//     11111111  11111111  11111111  11111011   -1
//     10000000  00000000  00000000  00000100    取反
//     结果为  -4
//     */
//     int a1=-8;
//     int b1=a1>>1;
//     printf("%d\n",b1);
//     return 0;
// }
int main()
{

    int num = 0;
    int i = 0;
    int count = 0;
    printf("请输入一个数：");
    scanf("%d", &num);
    for (i = 0; i < 32; i++)
    {
        if ((num >> i) & 1 == 1)
        {
            
            count++;
        }
    }
    printf("有%d个1\n", count);
    // int a = 5;
    // int b = 3;
    // printf("a为%d,b为%d\n", a, b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("a为%d,b为%d\n", a, b);
    return 0;
}