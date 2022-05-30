#include <stdio.h>

int main()
{
    // 折半查找
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    int cha = 10;
    int flag =true;
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (int left = 0, right = sz - 1; left <= right;)
    {
        int mid = (left + right) / 2;
        if (arr[mid] != cha)
        {
            if (arr[mid] > cha)
            {
                right = mid - 1;
                /* code */
            }
            else if (arr[mid] < cha)
            {
                left = mid + 1;
                /* code */
            }
            /* code */
        }
        else if (arr[mid] == cha)
        {
            printf("%d的下标是：%d", cha, mid);
            flag=false;
            break;
            /* code */
        }
    }
    if (true)
    {
        printf("没有在数组中查询到指定的数！！");
        /* code */
    }
    

    // // n！
    // int number =4;
    // int ji =1;
    // for (int i = 1; i <number+1; i++)
    // {
    //     ji*=i;
    //     /* code */
    // }
    // printf("%d个数相乘的结果是：%d",number,ji);

    // int i =0;
    // int j =0;
    // for (; i < 10; i++)
    // {
    //     /* code */
    //     for (; j < 10; j++)
    //     {
    //         printf("hehe\n");
    //     }

    // } //結果打印十次hhe

    // int ret = 0;
    // int ch = 0;
    // char arrays[20];
    // printf("请输入密码：");
    // scanf("%c", &arrays);
    // while (ch = getchar() != '\n')
    // {
    //     /* code */;
    // }

    // printf("请确认密码：(Y/N)：");
    // ret = getchar();
    // if ((ret == 'Y'))
    // {
    //     /* code */
    //     printf("密码确认");
    // }

    // else
    // {
    //     printf("放弃确认");
    // }

    // char ch;
    // while ((ch=getchar())!=EOF)// EOF  -end of file -> -1    就是ctrl+z终止
    // {
    //     putchar(ch);
    //     /* code */
    // }

    return 0;
}