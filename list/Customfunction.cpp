#include <stdio.h>
int binary_search(int arr[], int mubiao, int arraysize)
{
    // 算法实现
    int left = 0;
    int right = arraysize - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > mubiao) // 123 4 5 6
        {
            right = mid - 1;
        }
        else if (arr[mid] < mubiao)
        {
            left = mid + 1;
        }
        else if (arr[mid] == mubiao)
        {
            return mid;
            break;
        }
    }
    return -1;
}
// int main()
// {
//     int mubiao = 7;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int sz = sizeof(arr) / sizeof(arr[0]); //计算int型数组的长度  

//     int ret = binary_search(arr, mubiao, sz);  //由于数组内存可能过大，所以传递的是地址。系统默认情况下

//     if (ret == -1)
//     {
//         printf("没有找到！");
//     }
//     else
//     {
//         printf("下标是：%d", ret);
//     }

//     return 0;
// 


int main()
{
    printf("%d",printf("%d",printf("%d",43)));//输出结果：4321   原因printf()函数的返回值是返回字符写的总数。
    return 0;
}