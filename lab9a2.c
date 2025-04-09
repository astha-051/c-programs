#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a ansd b:");
    scanf("%d",&a);
    scanf("%d",&b);

    for(int i=a;i<=b;i++)
    {
        if(i%2==0 && i%5!=0)
        {
            printf("%d\n",i);
        }
    }
}