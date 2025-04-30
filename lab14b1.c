#include<stdio.h>
void main()
{
    int row,col;

    printf("enter row:");
    scanf("%d",&row);
    printf("enter col:");
    scanf("%d",&col);

    int a[row][col];
    // int k=row*col;
    int temp[row*col];
     int k=0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("enter elements a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            temp[k]=a[i][j];
            k++;
        }
    }

    int  m=temp[k/2];

    printf("median=%d",m);
}