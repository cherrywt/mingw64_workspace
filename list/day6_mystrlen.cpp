#include <stdio.h>
int mystrlen(char *str)
{
    char *start = str;
    char *end = str;
    for (end; *end != '\0';)    //根据数组指针计算元素个数
    {
        end++;
    }
    return end - start;
}
int main()
{
    char arr[] = "wangtao";
    int ret = mystrlen(arr);

    printf("%d", ret);
    return 0;
}