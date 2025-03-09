#include<stdio.h>
void main()
{
    int b;

    printf("enter binary number:");
    scanf("%d",&b);
    int rev;
    int rev2;

    rev=b%10;
    b=b/10; 

    printf("%d",rev);
    while(b>0)
    {
        rev2=b%10;
        b=b/10;
        

        if((rev^rev2)==1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        rev=rev2;
    }
   
}