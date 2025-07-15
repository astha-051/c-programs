#include<stdio.h>
void main()
{
    int a[10],i,n;

    printf("enter an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a value:");
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}