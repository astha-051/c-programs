#include<stdio.h>
void main()
{
    int a[10],i,n,nag=0;
    printf("entrer an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a value:");
        scanf("%d",&a[i]);

        if(a[i]<0)
        {
            nag++;
        }
    }
    printf("nagative=%d",nag);
}