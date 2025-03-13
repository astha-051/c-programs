#include<stdio.h>
void main()
{
    int totaldays;
    int year,week,days;
    printf("enter totaldays:");
    scanf("%d",&totaldays);

    year=totaldays/365;

    week=totaldays/7;

    days=totaldays%7;

    printf("%d %d %d",year,week,days);
}