#include<stdio.h>
void main()
{
    int a[10],b[10];
    int even=0,odd=0;

    for(int i=0;i<10;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0 && i+1<10 && a[i+1]%2!=0)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i++;
        }
    }
    printf("after change:");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}