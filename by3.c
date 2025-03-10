#include<stdio.h>
void main()
{
    int a[10],i,n,count=0;
    printf("enter an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a value:");
        scanf("%d",&a[i]);

        if(a[i]%3==0)
        {
            count++;
        }
    }
    printf("divide by 3=%d",count);
}