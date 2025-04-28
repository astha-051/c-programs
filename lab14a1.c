#include<stdio.h>
void main()
{
    int raw,col;
    

    printf("enter rows of matrix:");
    scanf("%d",&raw);
    printf("enter colimns of matrix:");
    scanf("%d",&col);
    int a[raw][col];

    for(int i=0;i<raw;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("enter elememts a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<raw;i++)
    {
        if(i % 2==0)
        {
            for(int j=0;j<col;j++)
            {
                printf("%d",a[i][j]);
            }
        }
        else
        {
            for(int j=col-1;j>=0;j--)
            {
                printf("%d",a[i][j]);
            }
        }
         printf("\n");
    }
}