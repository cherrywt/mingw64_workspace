#include <stdio.h>
#include <string.h>
// 结构体
struct Book
{
    char name[20];
    short price;
    /* data */
};


int main()
{   int number = 0;
    printf("请输如一个数字：");
    scanf("%d",&number);
    
    if (number%2==0)
    {
        printf("%d是偶數",number);
    }
    else{
        printf("%d是奇数",number);
    }
    return 0;
}
// int main()
// {
//     // 利用结构体类型创建一个该类型的变量
//     struct Book b = {"c语言程序设计", 20};
//     struct Book *pb = &b;
//     // 利用pb打印出我的书名和价格
//     printf("利用(*pb)打印出来的价格：%d\n", (*pb).price);
//     // .操作符  是结构体变量.成员
//     // ->操作符 是结构体指针->成员
//     printf("利用pb->打印出来的价格：%d\n", pb->price);
//     printf("书名：%s\n", b.name);
//     printf("价格：%d元\n", b.price);
//     b.price = 12;
//     printf("修改后的价格：%d元\n", b.price);
//     // 修改数组用strcoy()。 是库函数。需要-stirng.h
//     strcpy(b.name,"c++");
//     printf("修改后的书名：%s\n", b.name);


//         // printf("%d\n",sizeof(char*)); //指针的大小就是地址值的大小，64位就是8个字节的大小。32位就是4个字节的大小，所有打印都是4
//         // printf("%d\n",sizeof(int*));
//         // printf("%d\n",sizeof(float*));
//         // printf("%d\n",sizeof(double*));

//         return 0;
// }