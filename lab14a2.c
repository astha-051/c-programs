#include<stdio.h>
void main()
{
    int n,m;
    
    printf("enter raws:");
    scanf("%d",&n);
    printf("enter columns:");
    scanf("%d",&m);

    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter elements of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}