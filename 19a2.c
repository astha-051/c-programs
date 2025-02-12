#include<stdio.h>
int print(int a[],int size)
{
    printf("arrayb elements are=");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
void main()
{
    int a[]={10,20,30,40,50};
    int size = sizeof(a) / sizeof(a[0]);
    print(a,size);
}