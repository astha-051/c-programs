#include<stdio.h>
void main()
{
    int matrix[100][100];
    int r,c;

    printf("enter number of rows:");
    scanf("%d",&r);
    printf("enter number of columns:");
    scanf("%d",&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)          //3x2=[1/2 3/4 5/6]  transpose=[1/3/5  2/4/6]
        {
            printf("enter numbers%d %d:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("transpose of matrix \n:");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\n",matrix[j][i]);
        }
    }

    ;
}