#include<stdio.h>
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        for(int k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            if(j%2==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}