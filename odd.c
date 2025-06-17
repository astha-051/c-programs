#include<stdio.h>
void main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even");
    }
    else
    {
        printf("%d is odd");
    }
}