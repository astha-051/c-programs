#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    while(a<=b)
    {
        if(a%2==0 && a%5!=0)
        {
            printf("%d\n",a);
        }
        a++;
    }
}