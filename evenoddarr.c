#include<stdio.h>
void main()
{
    int a[10],i,n,even=0,odd=0;
    printf("enter an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a value:");
        scanf("%d",a[i]);

        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("even=%d",even);
    printf("odd=%d",odd);
}