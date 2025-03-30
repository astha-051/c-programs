#include<stdio.h>
void main()
{
    int n;
    printf("enter number of days:");
    scanf("%d",&n);
     
    if(n<=5)
    {
        printf("fine is 0.5 rupee");
    }
    else if(n>=6 && n<=10)
    {
        printf("fine is 1 rupee");
    }
    else if(n>=10)
    {
        printf("fine is 5 rupees");
    }
    else if(n>=30)
    {
        printf("cancel membership");
    }

}