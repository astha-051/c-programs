#include<stdio.h>
void main()
{
    int n,sum=0;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum+=j;
        }
    }
    printf("sum of series=%d",sum);
}