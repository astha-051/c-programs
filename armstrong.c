#include<stdio.h>
void main()
{
    int n,r,temp,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
}