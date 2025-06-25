#include<stdio.h>
void main()
{
    int a,b;
    int*p = &a;
    int*q = &b;
    int sum;

    printf("enter a:");
    scanf("%d",p);
    printf("enter b:");
    scanf("%d",q);

    sum= *p + *q;

    printf("sum=%d",sum);
}