#include<stdio.h>
void main()
{
    int i=1,n,flag=0;
    printf("enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}