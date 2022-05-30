/**
 * @file day8_test.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */
int my_strlrn(char *arr)
{
    char *start = arr;
    char *end = arr;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}
void reverse_string(char *arr)
{
    char tmp = arr[0];
    int len = my_strlrn(arr);
    int right = len - 1;
    arr[0] = arr[right];
    arr[right] = '\0';
    if (my_strlrn(arr + 1) >= 2)
    {

        reverse_string(arr + 1);
    }

    arr[right] = tmp;
}
#include <stdio.h>
int main()
{

    char arr[] = "abcdef";
    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}