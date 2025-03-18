#include<stdio.h>
void main()
{
    int i,n,ans;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans=n*i;
        printf("ans=%d",ans);
    }
}