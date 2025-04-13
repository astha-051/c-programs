#include<stdio.h>
void main()
{
    int n;
    float ans=1;
    float sum=0;

    printf("enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        ans=1;
        
        for(int j=1;j<=i;j++)
        {
            ans=ans*j;
        }
        printf("%d\n",ans);
        sum+=1/ans;
    }

    printf("%f",sum);
}