#include<stdio.h>
void main()
{
    float a,b;
    char symbol;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter a symbol:");
    scanf(" %c",&symbol);

    switch(symbol)
    {
        case '+':printf("a+b=%f",a+b);
        break;
        case '-':printf("a-b=%f",a-b);
        break;
        case '*':printf("a*b=%f",a*b);
        break;
        case '/':printf("a/b=%f",a/b);
        break;

        default:printf("invalid choice");
        break;
    }


}