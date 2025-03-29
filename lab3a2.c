#include<stdio.h>
void main()
{
    char n;
    float h,bill;

    printf("enter a vahecile name:");
    scanf("%c",&n);
    printf("enter time:");
    scanf("%f",&h);

    if(n=='c')
    {
        bill=h*2;
    }
    else if(n=='b')
    {
        bill=h*260;
    }
    else if(n=='t')
    {
        bill=h*384;
    }

    printf("vehicle=%c\n",n);
    printf("bill=%f",bill);
}