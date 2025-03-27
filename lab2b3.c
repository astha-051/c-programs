#include<stdio.h>
void main()
{
    int c,j;
    printf("enter current year:");
    scanf("%d",&c);
    printf("enter joining year:");
    scanf("%d",&j);

    if(c-j>=3)
    {
        printf("bonus=2500");
    }
}