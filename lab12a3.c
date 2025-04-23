#include<stdio.h>
void main()
{
    int a[10],b[10];

    for(int i=0;i<10;i++)
    {
        printf("enter  a number:");
        scanf("%d",&a[i]);
    }
    for(int i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}