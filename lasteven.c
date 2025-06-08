#include<stdio.h>
void main()
{
    int a,ans;
    printf("enter a number:");
    scanf("%d",&a);

    ans=a%10;

    if(ans%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}