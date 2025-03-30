#include<stdio.h>
void main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);

    if(a & 1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
}