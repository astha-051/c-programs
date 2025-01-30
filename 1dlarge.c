#include<stdio.h>
void main()
{
    int a[4];
    int largest;

    for(int i=0;i<4;i++)
    {
        printf("enter the value of%d",i);
        scanf("%d",&a[i]);
    }
        largest=a[0];

    for(int i=0;i<4;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }

    printf("largest is %d\n",largest);
}