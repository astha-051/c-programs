#include<stdio.h>
void main()
{
    int n,i;

    printf("enter number of trains:");
    scanf("%d",&n);

    float b[n];
    for( i=0;i<n;i++)
    {
    printf("enter arrival time:");
    scanf("%f",&b[i]);
    }

    float c[n];

    for(i=0;i<n;i++)
    {
        printf("departure time:");
        scanf("%f",&c[i]);
    }

    float temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    int count=0;
    int result=1;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]<=c[j])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count>result)
            {
                result=count;
            }
        }
    }

    printf("station=%d",result);

}