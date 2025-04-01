#include<stdio.h>
void main()
{
    int a,b,ans;
    printf("enter a number:");
    scanf("%d",&a);

    switch(a)
    {
        case 10:
        ans=a*a;
        printf("ans=%d",ans);
        break;

        case 9:
        printf("enter b:");
        scanf("%d",&b);
        ans=10*b;
        printf("ans=%d",ans);
        break;

        case 2:
        case 3:
        ans=a*99;
        printf("ans=%d",ans);
        break;
    }
}