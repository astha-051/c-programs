#include<stdio.h>
int check(int x)
{
    int i=2;
    while(i<=x/2)
    {
        if(x%i==0)
        {
            return 0;
        }
        i++;
        if(x<2)
        {
            return 1;
        }
    }

    void main()
    {
        int n1,prime;
        printf("enter a number:");
        scanf("%d",&n1);
        prime=check(n1);
        if(prime==0)
        {
            printf("%d is not prime",n1);
        }
        else
        {
            printf("%d is prime",n1);
        }
    }
}