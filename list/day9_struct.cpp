#include <stdio.h>
typedef struct Stu
{
    char name[20];
    int age;
    char sex[10];
} Stu; //类型重命名

void myprint(Stu* s)
{
    printf("name:%s\n", s->name);
    printf("age:%d\n", s->age);
    printf("sex:%s\n", s->sex);
}
int main()
{
    Stu stu = {"wangtao",18,"female"};
    // 形参是实参的一份临时拷贝，所以说传地址会节省空间和时间。
    // 函數传参的时候，参数是需要压栈的。如果传递的一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
    myprint(&stu);
    return 0;
}