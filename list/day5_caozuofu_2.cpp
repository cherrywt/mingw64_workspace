#include <stdio.h>
int main()
{

    int arr[10]={0};
    int* p=arr;
    for (size_t i = 0; i < 10; i++)
    {
        *(p+i)=1;
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    

    // char c=1;
    // printf("%u\n",sizeof(c));
    // printf("%u\n",sizeof(+c));  //  1 4  4   1
    // printf("%u\n",sizeof(-c));
    // printf("%u\n",sizeof(!c));

    // int a=1;
    // int b=2;
    // int c=(a>b,a=b+10,a,b=a+1);   //逗号表达式  输出结果是13
    // printf("%d",c);

    // int a = 1, b = 2, c = 3, d = 4;
    // int i = 0;
    // i = a++ || ++b || d++;
    // printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
    // // 2 2 3 4   因为  逻辑或左边为true  ||   右边的都不进行计算
    return 0;
}