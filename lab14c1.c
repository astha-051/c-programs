#include<stdio.h>
void main()
{
    int row,col;

    printf("enter row:");
    scanf("%d",&row);
    printf("enter column:");
    scanf("%d",&col);

    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("enter elements a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int row1,col1;

    printf("enter row1:");
    scanf("%d",&row1);
    printf("enter col1:");
    scanf("%d",&col1);

    int b[row1][col1];

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("enter elements b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    int c[row][col1];

    for(int i=0;i<row;i++)   //c with 0
    {
        for(int j=0;j<col1;j++)
        {
            c[i][j]=0;
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col1;j++)
        {
            for(int k=0;k<col;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}