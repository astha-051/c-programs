#include<stdio.h>
int fact(int x)
{
    int z=1;
    for(int i=1;i<=x;i++)
    {
        z=z*i;
    }
    return z;
}
// int fact(int x)
// {
//     if(x==0 || x==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return x*fact(x-1);
//     }
// }
void main()
{
    int a,ans;
    printf("enter a:");
    scanf("%d",&a);
    ans=fact(a);
    printf("ans=%d",ans);
}