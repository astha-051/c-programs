#include<stdio.h>
void main()
{
    int i=65,n;
    printf("enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("character value=%c",i);
        i++;
    }
}