#include<stdio.h>
void main()
{
    int n,t;

    printf("enter number of test:");
    scanf("%d",&t);

    while(t--)
    {
    printf("enter number of mountains:");
    scanf("%d",&n);
    
    int mount[n];

    for(int i=0;i<n;i++)
    {
        printf("enter height of mountains:");
        scanf("%d",&mount[i]);
    }

    int tallest=mount[0];

    for(int i=0;i<n;i++)
    {
        if(tallest<mount[i])
        {
            tallest=mount[i];
        }
    }

    printf("tallest mountain=%d\n",tallest);
    }
}