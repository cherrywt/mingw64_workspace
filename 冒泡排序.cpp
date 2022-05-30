#include <stdio.h>
#include <string.h>
void bubble_sort(int* arr, int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        int flag = 1; //假设数据已经有序了flag=1    ,优化：当数组是有序的时候直接跳出函数，不需要按部就班的执行
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0; //能进入这说明本次循环的数据不完全有序。
            }
        }
        if (flag == 1)
        {
            printf("数组有序！\n");//提示数组有序，可有可无
            break;
        }
    }
}
int main()
{
    //int arr[10] = {10, 15, 16, 17, 18, 90, 40, 30, 5, 0};
    int arr[10] = {1, 15, 16, 17, 18, 20, 21, 30, 35, 40};
    int sz = sizeof(arr) / sizeof(arr[0]); // sz  is  10.
    bubble_sort(arr,sz);
    for (size_t i = 0; i < sz; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}