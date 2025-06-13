#include<stdio.h>
void main()
{
    float a,b,c,ans,largest;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);


    if(a>b)
    {
        largest=a;
    }
    else{
        largest=b;
    }
     ans=largest*c;
     printf("ans=%f",ans);
}