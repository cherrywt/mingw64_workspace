#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    char arr1[] = "yang rui i love you !!!!";
    char arr2[] = "########################";
    int left = 0;
    int right = strlen(arr1) - 1;
    while (left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(800);   // <windows.h>头文件  
        system("CLS");//  ?头文件 <stdlib.h>  
        left++;
        right--;
    }
    printf("%s\n", arr2);
    return 0;
}