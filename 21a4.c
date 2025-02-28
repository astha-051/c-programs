#include<stdio.h>
struct student
{
    char name[10];
    float per;
    int age;
};
void main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        printf("enter student name:");
        scanf("%s",s[i].name);
        printf("enter student's per:");
        scanf("%f",&s[i].per);
        printf("enter student's age:");
        scanf("%d",&s[i].age);
    }

    for(int i=0;i<5;i++)
    {
        printf("student name:%s\n",s[i].name);
        printf("student's per:%f\n",s[i].per);
        printf("student's age:%d\n",s[i].age);
    }
}