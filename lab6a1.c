#include<stdio.h>
void main()
{
    int n,i=1;
    printf("rnter n:");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%2!=0)
        {
            printf("%d",i);

        }
        i++;
    }
}