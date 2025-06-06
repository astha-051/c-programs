#include<stdio.h>
float speed(float a,float b)
{
    return a/b;
}
void main()
{
    float distance,time;

    printf("enter distance and time you cover:");
    scanf("%f",&distance);
    scanf("%f",&time);

    printf("%f",speed(distance,time));
}