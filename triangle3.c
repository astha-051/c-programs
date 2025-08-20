#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter a side:");
    scanf("%f",&a);
    printf("enter b side:");
    scanf("%f",&b);
    printf("enter c side:");
    scanf("%f",&c);

    if(a+b==c && a+c==b && b+c==a)
    {
        if(a==b && b==c)
        {
            printf("equilaterral");
        }
        else if(a==b || b==c || a==c)
        {
            printf("isolaces");
        }
        else
        {
            printf("scalen");
        }
    }
}