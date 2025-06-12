#include<stdio.h>
void main()
{
    float distance,fuel;

    printf("enter distance and used fuel:");
    scanf("%f",&distance);
    scanf("%f",&fuel);

    printf("milage=%f",distance/fuel);
}