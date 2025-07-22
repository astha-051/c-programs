#include<stdio.h>
void main()
{
    int i=1,n,sum=0;

    printf("enter the value of n:");
    scanf("%d",&n);

    while(i<n)
    {
        sum+=i*i;
        i++;
    }

    printf("the sum of series 1+4+9+...+%d is:%d \n",sum);
}