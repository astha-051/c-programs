#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a:");;
    scanf("%d",&a);
    printf("enter b:");;
    scanf("%d",&b);

    if(a|b)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}