#include<stdio.h>
void main()
{
    int a[10],b[10];

    for(int i=0;i<10;i++)
    {
        printf("enter 1st array number:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++)
    {
        printf("enter 2nd array number:");
        scanf("%d",&b[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]!=b[i])
        {
            printf("0\n");
            break;
        }
        else 
        {
            printf("1");
            break;
        }
    }
}