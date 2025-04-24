#include<stdio.h>
void main()
{
    int a[20];
    int n;
    float median;

    printf("enter n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        int minvalue=a[i];
        int mindex=i;

        for(int j=0;j<n;j++)
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

    if(n%2==0)
    {
        median=((a[n/2-1]+a[n/2])/2.0);
    }
    else{
         median=a[n/2];
    }

    printf("median=%f",median);
}