#include<stdio.h>
void main()
{
    int b,e,j=1;
    int result=1;

    printf("enter b:");
    scanf("%d",&b);
    printf("enter e:");
    scanf("%d",&e);

    int i=1;
    for(i=1;i<=e;i++)
    {
        int temp=0;
        int j=1;
        
        for(j=1;j<=b;j++)
        {
            temp+=result;
        }

        result=temp;
    }

    printf("%d",result);
}
