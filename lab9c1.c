#include<stdio.h>
#include<math.h>
void main()
{
    int b,e;
    int result=1;

    printf("enter base:");
    scanf("%d",&b);
    printf("enter exponent:");
    scanf("%d",&e);

    for(int i=1;i<=e;i++)       //base 3 exponent 3 result=1;inner loop adds 1 three times temp=3;update result=3;   
    {
        int temp=0;               //result=3inner loop adds 3 three times temp=3; update result=9;

        for(int j=1;j<=b;j++)
        {
            temp+=result;
        }

        result=temp;
    }

    printf("%d",result);
}