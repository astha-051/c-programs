#include<stdio.h>
void main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("enter an element of a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter an element of b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j] = a[i][j]*b[i][j];
            printf("%d\n",c[i][j]);
        }
    }
}