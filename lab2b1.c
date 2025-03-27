#include<stdio.h>
void main()
{
    int x;
    printf("enter x;");
    scanf("%d",&x);

    if(x>=10)
    {
        int y=3*x+5;
        printf("%d",y);
    }
    else
    {
        int y=8*x+5;
        printf("%d",y);
    }
}