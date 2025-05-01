#include<stdio.h>
void main()
{
    int row,col;

    printf("enter row:");
    scanf("%d",&row);
    printf("enter col:");
    scanf("%d",&col);

    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i]==a[j])
        {
            sum+=a[i][j];
        }
        }
    }

    printf("sum=%d",sum);
    
    int sum2=0;
    for(int i=0;i<row;i++)
    {
            if(row-i-1!=i)
            {
                sum2+=a[i][row-i-1];
            }
        
    }
    printf("\n secondary diagonal's sum=%d",sum2);
}