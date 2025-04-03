#include<stdio.h>
void main()
{
    int a,b,ans;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    
    // if(a>b)
    // {
    //     ans=1;
    // }
    // else
    // {
    //     ans=2;
    // }

    switch(a>b)
    {
        case 1:printf("a is largest");
        break;
        case 0:printf("b is largest");
        break;
        // default:printf("invalid option");
        // break;
    }

}