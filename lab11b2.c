#include<stdio.h>
void pattern(int a,int b)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void main()
{
    int h,w;
    printf("enter height:");
    scanf("%d",&h);
    printf("enter width:");
    scanf("%d",&w);

    pattern(h,w);
}