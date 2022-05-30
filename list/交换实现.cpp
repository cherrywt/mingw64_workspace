#include <stdio.h>
#include "swapfunction.h"
int main()
{
    int a =10;
    int b =14;
    printf("a：%db：%d\n",a,b);
    swap(&b,&a);
    printf("a：%db：%d\n",a,b);
    return 0 ;

}