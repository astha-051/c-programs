#include<stdio.h>
void main()
{
    int a,b,c,ans;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a number:");
    scanf("%d",&b);
    printf("enter a number:");
    scanf("%d",&c);


    ans=a>b?(a>c?a:c):(b>c?b:c);

    printf("%d is graeter",ans);
}