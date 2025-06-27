#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    int pos=0;nag=0;zero=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter element at position[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>0)
            {
                pos++;
            }
            else if(a[i][j]<0)
            {
                nag++;
            }
            else
            {
                zero++;
            }
        }
    }
    printf("pos=%d",pos);
    printf("nag=%d",nag);
    printf("zero=%d",zero);
}