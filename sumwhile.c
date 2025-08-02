#include<stdio.h>
void main()
{
    int i=1;
    int a,sum=0;
    printf("enter a:");
    scanf("%d",&a);
    while(i<=a)
    {
        sum=sum+a;
        i++;
    }
    printf("%d",sum);
}