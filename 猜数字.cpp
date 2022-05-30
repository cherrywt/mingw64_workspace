#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void game()
{
    int ret = 0;
    int guess = 0;
    ret = rand() % 100 + 1;
    
    while (1)
    {
        printf("请猜数字：");
        scanf("%d",&guess);
        if (guess>ret)
        {
            printf("你猜大了：\n");
        }else if (guess<ret)
        {
            printf("你猜小了\n");

        }else{
            printf("恭喜你才对了！\n");
            break;
        }
        
        
    }
    
}
void menu()
{
    printf("######################\n");
    printf("1.开始游戏\t 0.退出游戏\n");
    printf("######################\n");
}
int main()
{
    int input = 0;
    /* 时间戳
        当前计算机的时间-计算机的起始时间(1970.1.1.0:0:0) =()秒
        拿时间戳来设置随机数的生成起始点
        NULL空指针
    */
    srand((unsigned int)time(NULL));
    
    do
    {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏：");
            break;
        default:
            printf("选择错误");
            break;
        }
    } while (input);

    return 0;
}