#include<stdio.h>
void main()
{
    int n,a;
    printf("enter n:");
    scanf("%d",&n);

    printf("enter a number:");
    scanf("%d",&a);
    int small=a;
    int large=a;

    for(int i=2;i<=n;i++)
    {
        printf("enter a number:");
        scanf("%d",&a);

        if(a<small)
        {
            small=a;
        }
        if(a>large)
        {
            large=a;
        }

        if(a<0)
        {
            printf("program terminated");
            break;
        }
    }

    printf("small=%d",small);
    printf("\nlarge=%d",large);
    
}