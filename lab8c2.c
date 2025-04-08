#include<stdio.h>
void main()
{
    int i,j,k,n;
    int temp=1;

    printf("enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(k=n;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
 }




