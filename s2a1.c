#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    a=a+b;
    a=a-b;
    b=a-b;

    printf("%d",a);
    printf("%d",b);
}