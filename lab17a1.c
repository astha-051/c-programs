#include<stdio.h>
typedef struct add
{
    int real;
    int img;
}addition;
void main()
{
    addition a1;
    addition a2;

    printf("enter first part of first complex number:");
    scanf("%d",&a1.real);

    printf("enter second part of first complex number:");
    scanf("%d",&a1.img);

    printf("enter first part of second complex number:");
    scanf("%d",&a2.real);

    printf("enter second part of second complex number:");
    scanf("%d",&a2.img);

    int c=a1.real+a2.real;
    int d=a1.img+a2.img;
    printf("sum=%d",c);
    printf("\nsum img=%d",d);

    printf("\n multi=%d",c*d);
}