#include<stdio.h>
void main()
{
    int i=1;
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    while(i<=b)
    {
        if(a%2==0)
        {
            printf("%d",i);
        }
       i++;
    }
    
}