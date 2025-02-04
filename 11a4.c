#include<stdio.h>
void main()
{
    int a,b,ans=1;

    printf("enter a:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);

    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    printf("ans=%d",ans);
}