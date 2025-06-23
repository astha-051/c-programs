#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0;
    int  *ptr;
    printf("enter an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter a value:");
        scanf("%d",&a[i]);
    }

    ptr=a;

    for(i=0;i<n;i++)
    {
        sum+=*ptr;
        ptr++;
    }

    printf("sum=%d",sum);
}