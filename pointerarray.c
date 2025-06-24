#include<stdio.h>
void main()
{
    int a[10],n;

    printf("enter an array:");
    scanf("%d",&n);

    int*p;

    for(int i=0;i<n;i++)
    {
        p=&a[i];
        printf("enter elements:");
        scanf("%d",p);
    }

    printf("array elements are=");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}