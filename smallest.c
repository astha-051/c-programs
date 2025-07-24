#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    if(a<b)
    {
        if(a<c)
        {
            printf("a is smallest");
        }
        else
        {
            printf("c is smallest");
        }
    }
    else
    {
        if(b<c)
        {
            printf("b is smallest");
        }
        else
        {
            printf("c is smallest");
        }
    }
}
