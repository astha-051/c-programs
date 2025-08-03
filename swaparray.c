#include<stdio.h>
void main()
{
    int n,m;
    int temp;

    printf("enter an aarray:");
    scanf("%d",&n);
    printf("enter an aarray:");
    scanf("%d",&m);

    int*p;
    int*q;
    int a[n],b[m];

    for(int i=0;i<n;i++)
    {
        p=&a[i];
        printf("enter an elements:");
        scanf("%d",p);
    }

    for(int j=0;j<n;j++)
    {
        q=&b[j];
        printf("enter an elements:");
        scanf("%d",q);
    }

    temp=*p;
    *p=*q;
    *q=temp;

    printf("array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    printf("array elements are:");
    for(int j=0;j<n;j++)
    {
        printf("%d",b[j]);
    }
    printf("\n");
}