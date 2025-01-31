#include<stdio.h>
void main()
{
    int num1,num2;
    int result=0;
    int count=0;

    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number");
    scanf("%d",&num2);

    while(count<num2)
    {
        result+=num1;
        count++;
    }

    printf("the product of %d and %d is:%d\n",num1,num2,result);
}