#include<stdio.h>
void main()
{
    int n=10,i;

    printf("enter a number to guess:");

    for(;;)
    {
        scanf("%d",&i);
        if(i==10)
        {
            printf("congratulations");
            break;
        }
        else{
            printf("try again");
        }
    }
}