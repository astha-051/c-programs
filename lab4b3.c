#include<stdio.h>
void main()
{
    int age;
    float amount;
    char h,g,c;

    printf("enter age:");
    scanf("%d",&age);
    printf("enter your health condition e for exellent p for poor:");
    scanf(" %c",&h);
    printf("enter your gender:");
    scanf(" %c",&g);
    printf("enter your living place either c for city or v for village");;
    scanf(" %c",&c);

    if(h=='e' && age>=25 && age<=35 && c=='c' && g=='m')
    {
        amount=4*1000;
        printf("insured\n");
        printf("premium rate=%f\n",amount);
        printf("max amount=2 lakh");
    }

    else if(h=='e' && age>=25 && age<=35 && c=='c' && g=='f')
    {
        amount=3*1000;
        printf("insured\n");
        printf("premium rate=%f\n",amount);
        printf("max amount=1 lakh");
    }
    
    else
    {
        printf("not insured");
    }
}