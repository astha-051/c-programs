#include<stdio.h>
void main()
{
    float a,b,dis,e1,r2;

    printf("enter cooficient a,b,c:");
    scanf("%f %f %f",&a &b &c);

    dis=b*b-4*a*c;

    if(dis>o)
    {
        r1=(-b+sqrt(dis))/(2*a);
        r2=(+b+sqrt(dis))/(2*a);
        printf("roots are real and distinct:%.2f and %.2f",r1,r2);
    }
    else if(dis==0)
    {
        r1= r2= -b/(2*a);
        printf("roots are real and distinct:%.2f and %.2f",r1,r2);
    }
    else
    {
        float realpart=-b/(2*a);
        float imaginarypart=sqrt(-dis)/(2*1);
        printf("roots are complex;%.2f+%.2f and %2.f-%2.fi\n",realpart,imaginarypart,realpart,imaginarypart);
    }
}