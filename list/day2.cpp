#include <stdio.h>
#include <string.h>
// �ṹ��
struct Book
{
    char name[20];
    short price;
    /* data */
};


int main()
{   int number = 0;
    printf("������һ�����֣�");
    scanf("%d",&number);
    
    if (number%2==0)
    {
        printf("%d��ż��",number);
    }
    else{
        printf("%d������",number);
    }
    return 0;
}
// int main()
// {
//     // ���ýṹ�����ʹ���һ�������͵ı���
//     struct Book b = {"c���Գ������", 20};
//     struct Book *pb = &b;
//     // ����pb��ӡ���ҵ������ͼ۸�
//     printf("����(*pb)��ӡ�����ļ۸�%d\n", (*pb).price);
//     // .������  �ǽṹ�����.��Ա
//     // ->������ �ǽṹ��ָ��->��Ա
//     printf("����pb->��ӡ�����ļ۸�%d\n", pb->price);
//     printf("������%s\n", b.name);
//     printf("�۸�%dԪ\n", b.price);
//     b.price = 12;
//     printf("�޸ĺ�ļ۸�%dԪ\n", b.price);
//     // �޸�������strcoy()�� �ǿ⺯������Ҫ-stirng.h
//     strcpy(b.name,"c++");
//     printf("�޸ĺ��������%s\n", b.name);


//         // printf("%d\n",sizeof(char*)); //ָ��Ĵ�С���ǵ�ֵַ�Ĵ�С��64λ����8���ֽڵĴ�С��32λ����4���ֽڵĴ�С�����д�ӡ����4
//         // printf("%d\n",sizeof(int*));
//         // printf("%d\n",sizeof(float*));
//         // printf("%d\n",sizeof(double*));

//         return 0;
// }