#include<stdio.h>
void main()
{
    int i=1;
    int n;
    int counteven=0,countodd=0;
    while(i<10)
    {
        printf("enter n:");
        scanf("%d",&n);

        if(n%2==0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
        i++;
    }
    printf("even=%d",counteven);
    printf("odd=%d",countodd);
}