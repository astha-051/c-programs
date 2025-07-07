#include<stdio.h>
void main()
{
    int a[10],i,n,pos=0,nag=0;
    printf("enter number of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("entre a value:");
        scanf("%d",&a[i]);

        if(a[i]>0)
        {
            pos++;
        }
        else
        {
            nag++;
        }
    }
    printf("positive=%d",pos);
    printf("nagative=%d",nag);
}