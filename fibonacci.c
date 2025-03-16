#include<stdio.h>
void main()
{
    int n;

    printf("enter the no. of terms:");
    scanf("%d",&n);

    int first=0,second=1;

    printf("fibonacci series:");

     if(n>=1)
     {
        printf("%d",first);
     }
     if(n>=2)
        {
            printf("%d",second);
        }

        for(int i=3;i<=n;i++)
        {
            int next=first+second;
            printf("%d",next);

            first=second;
            second=next;
        }
        printf("\n");

     }
     