#include<stdio.h>
void main()
{
  
    int a[5];

    for(int i=0;i<5;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5-1;i++)
    {
        int minvalue=a[i];
        int mindex=i;

        for(int j=i+1;j<5;j++)
        {
            if(minvalue>a[j])
            {
                minvalue=a[j];
                mindex=j;
            }
        }
        if(mindex!=i)
        {
            int temp=a[i];
            a[i]=minvalue;
            a[mindex]=temp;
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d   ",a[i]);
    }
}