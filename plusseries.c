#include<stdio.h>
void main()
{
    int n;
    int i=1;
    printf("enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("+%d",i*i);
        i++;
    }
}