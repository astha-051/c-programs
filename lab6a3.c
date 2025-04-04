#include<stdio.h>
void main()
{
    int a,i=1,sum=0;
    printf("enter no.");
    scanf("%d",&a);

    while(i<=2*a)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
        i++;
    }
    printf("sum=%d",sum);
}