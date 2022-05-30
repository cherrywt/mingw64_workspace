#include <stdio.h>
int main()
{   
    // int arr[5]={1,2,3};//不完全初始化，剩下的元素默认初始化为0
    // char arr1[5]={'a','b'};//arr1数组内存是，a,b,0,0,0  
    // char arr2[5]="ab";//arr2数组内存是a,b,\0,\0,\0    但是两个数组的值是一样的。
    int arr[10]={1,2,3,4,5,6,7};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    return 0;
}