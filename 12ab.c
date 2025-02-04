#include<stdio.h>
void main()
{
    int i,j,count=97,ans=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c",count);
                count++;
            }
            else
            {
                printf("%d",ans);
                ans++;
            }
        }
        printf("\n");
    }
}