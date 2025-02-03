#include<stdio.h>
void main()
{
    int a,sum=0;

    printf("enter no.:");
    scanf("%d",&a);

    for(int i=1;i*i<=a;i++)
    {
        sum=sum+i*i;
    }

    printf("sum=%d",sum);
}