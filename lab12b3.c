#include<stdio.h>
void main()
{
    int start,end;
    int a[5];

    for(int i=0;i<5;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    
    printf("enter start point:");
    scanf("%d",&start);

    printf("enter end:");
    scanf("%d",&end);

    for(int i=0;i<5;i++)
    {   
        if(a[i]>=start && a[i]<=end)
        {
        printf("%d",a[i]);
        }
    }
}