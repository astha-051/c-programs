#include<stdio.h>
void main()
{
    int a[5],choice,sum=0,i;
    float avg;

    for(int i=0;i<5;i++)
    {
    printf("enter a numbers:");
    scanf("%d",&a[i]);
    }

    printf("enter 1 for smallest:\n");
    printf("enter 2 for largest:\n");
    printf("enter 3 for sum:\n");
    printf("enter 4 for average:\n");
    scanf("%d",&choice);

    int small=a[0];
    int large=a[0];

    for(i=1;i<5;i++)
    {
    if(a[i]<small)
    {
        small=a[i];
    }
    }

    for(i=1;i<5;i++)
    {
    if(a[i]>large)
    {
        large=a[i];
    }
    }
    
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }

    avg=sum/5;

    switch(choice)
    {
        case 1:printf("smallest=%d",small);
        break;
        case 2:printf("larfest=%d",large);
        break;
        case  3:printf("sum=%d",sum);
        break;
        case 4:printf("avg=%f",avg);
        break;
        default:printf("invalid option");
        break;
    }

}
