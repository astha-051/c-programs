#include<stdio.h>
void main()
{
    int a,ans;
    printf("enter a:");
    scanf("%d",&a);

    if(a>0)
    {
        ans=1;
    }
    else if(a<0)
    {
        ans=2;
    }
    else
    {
        ans=0;
    }
    switch(ans)   
    {
        case 1:printf("%d is positive",a);
        break;
        case 2:printf("%d is nagative",a);
        break;
        case 0:printf("%d is zero",a);
        break;
        default:printf("invalid option");
        break;
    }
}