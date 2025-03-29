#include<stdio.h>
void main()
{
    float c,s,ans;
    printf("enter cost price:");
    scanf("%f",&c);
    printf("enter selling price:");
    scanf("%f",&s);

    ans=s-c;

    if(ans>c)
    {
        printf("profit\n");
        printf("profit=%f",ans);
    }
    else
    {
        printf("loss\n");
        printf("loss=%f",ans);
    }

    
}