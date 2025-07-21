#include<stdio.h>
void main()
{
    int totalseconds;
    int second,minute,hour;
    printf("enter total second:");
    scanf("%d",&totalseconds);

    hour=totalseconds/3600;

    minute=(totalseconds%3600)/60;

    second=totalseconds%60;

    printf("%d %d %d",hour,minute,second);
}