#include<stdio.h>
void main()
{
    int n,a,i;
    printf("enter a number series:");
    scanf("%d",&n);

    printf("enter integer:");
    scanf("%d",&a);
    int small=a;
    int large=a;

    for(i=2;i<=n;i++)
    {
        printf("enter integer:");
        scanf("%d",&a);

        if(a<small)
        {
            small=a;
        }
        if(a>large)
        {
            large=a;
        }
    }

    printf("small=%d\n",small);
    printf("large=%d",large);
}