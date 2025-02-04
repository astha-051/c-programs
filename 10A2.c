#include<stdio.h>
void main()
{
    int n,sum=0,i=1,avg,a;
    printf("enter a nmbr");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("enter a nmbr");
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    avg=sum/n;
    printf("sum=%d",sum);
    printf("\navg=%d",avg);
}

