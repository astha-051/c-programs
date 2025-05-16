#include<stdio.h>
#include<string.h>
typedef struct iteam
{
    char code[100];
    char name[100];
    int quantity;
    int price;
}it;
int main()
{
    it i1;

    printf("enter iteam code:");
    scanf("%s",i1.code);

    printf("enter iteam name:");
    scanf("%s",i1.name);

    printf("enter quantity of iteam:");
    scanf("%d",&i1.quantity);

    printf("enter price of iteam:");
    scanf("%d",&i1.price);

    printf("\n iteam details:");
    printf("code=%s \n name=%s \n quantity=%d \n price=%d",i1.code ,i1.name, i1.quantity ,i1.price);

    float total=i1.quantity*i1.price;
    printf("\n total price=%f",total);
}