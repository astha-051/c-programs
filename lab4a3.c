#include<stdio.h>
#include<string.h>
void main()
{
    int s,o,c;

    printf("enter stock:");
    scanf("%d",&s);
    printf("enter order:");
    scanf("%d",&o);
    printf("enter credit 1 for ok and 0 for not ok:");
    scanf("%d",&c);

    if(o<=s && c==1)
    {
        printf("supply has requirement");
    }
    else if(c==0)
    {
        printf("do not supply");
    }
    else if(c==1 &&s<o)
    {
        printf("supply");
    }
}