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
        printf("������֣�");
        scanf("%d",&guess);
        if (guess>ret)
        {
            printf("��´��ˣ�\n");
        }else if (guess<ret)
        {
            printf("���С��\n");

        }else{
            printf("��ϲ��Ŷ��ˣ�\n");
            break;
        }
        
        
    }
    
}
void menu()
{
    printf("######################\n");
    printf("1.��ʼ��Ϸ\t 0.�˳���Ϸ\n");
    printf("######################\n");
}
int main()
{
    int input = 0;
    /* ʱ���
        ��ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0:0) =()��
        ��ʱ����������������������ʼ��
        NULL��ָ��
    */
    srand((unsigned int)time(NULL));
    
    do
    {
        menu();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ��");
            break;
        default:
            printf("ѡ�����");
            break;
        }
    } while (input);

    return 0;
}