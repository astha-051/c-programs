#include<stdio.h>
void main()
{
    float p,q,bill;
    printf("enter price:");
    scanf("%f",&p);
    printf("enter quantity:");
    scanf("%f",&q);

    bill=p*q;

    if(bill>=1000)
    {
        bill=bill-bill*10/100;
        printf("price=%f",bill);
    }
    else
    {
        printf("bill=%f",bill);
    }
}