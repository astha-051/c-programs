#include<stdio.h>
void main()
{
    int i,n,ans=1;
    printf("entr n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("ans=%d",ans);
}