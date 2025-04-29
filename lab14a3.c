#include<stdio.h>
void main()
{
    int n,m;
    int i,j;

    printf("enter raws:");
    scanf("%d",&n);
    printf("enter columns:");
    scanf("%d",&m);

    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter elements pf a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int rawzero[n],colzero[m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                rawzero[i]=1;
                colzero[j]=1;
            }
        }
    }
    for (int i = 0; i < n; i++) 
    {
        
            if (rawzero[i] == 1) 
            {
                for(int j=0;j<m;j++)
                {
                    a[i][j] = 0;
                }
            }
    }

    for(int j=0; j<m; j++)
    {
        if(colzero[j]==1)
        {
            for(int i=0;i<n;i++)
            {
                a[i][j]=0;
            }
        }
    }


    printf("updated matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}