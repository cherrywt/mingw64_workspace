#include <stdio.h>
#include <string.h>
#define MAX 10
enum Sex
{
    MALE,
    FEMALE,
    SECRET
};
int main()
{
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c'};
    printf("arr1的字符串长度:%d\n", strlen(arr1));
    printf("arr2的字符串长度:%d\n", strlen(arr2));
    printf("%c\n",'\55');
    printf("%c\n",'\x61');  //\x61算一个字符   \ddd算1-3位的八进制 算一个字符

    /*
    枚举常量  枚举关键字 enum
    
    */
    //    printf("%d\n",MALE);
    //    printf("%d\n",FEMALE);
    //    printf("%d\n",SECRET);

    // #define 定义常量
    // int array[MAX] = {0};
    // printf("%d", MAX);

    // const int num =10;
    // // int array[num]={0};
    // num=20;
    return 0;
}