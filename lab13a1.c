#include<stdio.h>
void main()
{
    int a[5];
    int peak;

    for(int i=0;i<a[5];i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5-1;i++)
    {
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
        {
            peak=a[i];
        }
    }

    printf("%d",peak);
}