#include<stdio.h>
void main()
{
    int a=1;
    char c='A';
    int n;
    printf("enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k>=0;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c ",c);
                c++;
            }
            else 
            {
                printf("%d ",a);
                a++;
            }
        }
        printf("\n");
    }
}