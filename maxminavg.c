#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0,min,max;
    float avg;
    printf("enter an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a value:");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    printf("sum=%d\t avg=%f",sum,avg);

    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max=%d",max);

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("min=%d",min);
}