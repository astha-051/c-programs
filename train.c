#include<stdio.h>
void main()
{
    float a[1000],b[1000];
    int n,station=1,cstation;

    printf("enter an array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("enter arrival time:");
        scanf("%f",&a[i]);
        printf("enter departure time:");
        scanf("%f",&b[i]);
    }

    for(int i=0;i<n;i++)
    {
        cstation=0;
        for (int j=0;j<n;j++)
        {
        if(a[i]<b[j] && a[j]<b[i])
        {
            cstation++;
        }
        }
    }

    if(cstation > station)
    {
        station=cstation;
    }
    printf("station=%d",station);


}