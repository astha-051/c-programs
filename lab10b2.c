#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);

    while(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==n)
    {
        printf("%d is perfect",n);
    }
    else{
        printf("%d is not perfect",n);
    }
}