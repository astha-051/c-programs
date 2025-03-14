#include<stdio.h>
void main()
{
    int a,i;
    int b[32];
    printf("enter a:");
    scanf("%d",&a);

    for(i=0;a>0;i++)
    {
        b[i]=a%2;
        a=a/2;
    }

    printf("binary:")
    {
        for(i=i-1;i>=0;i--)
        {
            printf("%d",b[i]);
        }
    }
}