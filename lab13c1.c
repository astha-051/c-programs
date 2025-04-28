#include<stdio.h>
void main()
{
    int n;
    int fresh;

    printf("enter number of iteams:");
    scanf("%d",&n);
    int a[n];

    int b[n];

    for(int i=0;i<n;i++)
    {
        printf("enter cost:");
        scanf("%d",&b[i]);
    }

    int c[n];

    for(int i=0;i<n;i++)
    {
        printf("enter freshness:");
        scanf("%d",&c[i]);
    }

    printf("enter freshness value:");
    scanf("%d",&fresh);

    int cost=0;
    
    for(int i=0;i<n;i++)
    {
        if(c[i]>fresh)
        {
            cost+=b[i];
        }
    }

    printf("cost=%d",cost);
}