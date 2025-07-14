#include<stdio.h>
void main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("enter a value:");
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}