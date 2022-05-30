#include<stdio.h>
 
int main()
 
{
    int i,n;
    
    printf("请输入字符个数：\n");
    scanf("%d",&n);
    
    char a[n+1];
    
    printf("请开始输入字符：");
    
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
     } 
     a[n]='\0';
     
     printf("您输入的字符串是：%s",a);
     return 0;
}