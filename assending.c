#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d",&a &b &c);
    if(a<=b && a<=c)
    {
        if(b<=c)
        {
            printf("%d %d %d",a,b,c);
        }
        else
        {
            printf("%d %D %d",a,c,b);
        }
    }
    else if(b<=a && b<=c)
    {
        if(a<=c)
        {
            printf("%d %d %d"b,a,c);
        }
        else
        {
            printf("%d %d %d",b,c,a);
        }
    }
    else
    {
        if(a<=b)
        {
            printf("%d %d %d",c,a,b);
        }
        else
        {
            printf("%d %d %d",c,b,a);
        }
    }
}