#include<stdio.h>
void main()
{
    int h,w;
    printf("enter height:");
    scanf("%d",&h);
    printf("enter width:");
    scanf("%d",&w);

    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}