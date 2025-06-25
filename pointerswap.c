#include<stdio.h>
void main()
{
    int a,b;
    int*p = &a;
    int*q = &b;
    int ans;


    printf("enter a:");
    scanf("%d",p);
    printf("enter b:");
    scanf("%d",q);

    ans=*p;
    *p=*q;
    *q=ans;

    printf("%d %d",a,b);


}