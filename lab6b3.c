#include<stdio.h>
void main()
{
    int n,i=3;
    printf("enter n:");
    scanf("%d",&n);

    int first=0,second=1;

    printf("fibonacci series:");

    while(i<=n)
    {
        int next=first+second;
        printf("%d\n",next);

        first=second;
        second=next;
        i++;
    }
    
}