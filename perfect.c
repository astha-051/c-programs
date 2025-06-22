#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
        if(sum==n)
        {
            printf("perfect no");
        }
        else
        {
            printf("not perfect");
        }
    
}