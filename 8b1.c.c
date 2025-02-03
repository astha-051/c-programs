#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,D,delta;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);
    D=b*b-(4*a*c);
    if(D<0)
    {
        printf("it is complex root");
    }
    else if(D>0)
    {
        delta=(-b+sqrt(D))/2*a;
        printf("root=%f",delta);
        delta=(-b-sqrt(D))/2*a;
        printf("root=%f",delta);
     }
    else{
        delta=(-b)/2*a;
        printf("root=%f",delta);
    }



    
}