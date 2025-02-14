#include<stdio.h>
struct employee
{
    char name[10];
    int age;
    float experience;
};
void main()
{
    struct employee e[3];
    for(int i=0;i<3;i++)
    {
        printf("enter employee name:");
        scanf("%s",e[i].name);
        printf("enter employee age:");
        scanf("%d",&e[i].age);
        printf("enter employee experience:");
        scanf("%f",&e[i].experience);
    }

    for(int i=0;i<3;i++)
    {
        printf("employee name:%s\n",e[i].name);
        printf("employee age:%d\n",e[i].age);
        printf("employee experience:%f\n",e[i].experience);
    }
}