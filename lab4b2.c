#include<stdio.h>
void main()
{
    int a,b,c,ans;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);

    ans = a>b?(a>c?a:c):(b>c?b:c);

    printf("%d is greatest",ans);
}