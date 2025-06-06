#include<stdio.h>
float count(float a,float b)
{
    return a/b;
}
void main()
{
    int a,b,c,x;

    printf("enter a , b and c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    x=(float)b-(float)c;
    printf("%f",count(a,x));
}