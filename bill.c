#include<stdio.h>
void main()
{
    float unit,bill=0;
    printf("enter unit:");
    scanf("%f",&unit);
    if(unit<=50)
    {
        bill=unit*0.50;
    }
    else if(unit<=150)
    {
        bill=(50*0.5)+((unit-50)*0.75);
    }
    else if(unit<250)
    {
        bill=(50*0.5)+(100*0.75)+((unit-150)*1.20);
    }
    else
    {
        bill=(50*0.5)+(100*0.75)+(100*1.20)+((unit-250)*1.5);
    }
    bill=bill*20;

    printf("bill=%f",bill);

}