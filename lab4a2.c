#include<stdio.h>
void main()
{
    float w,h,ans;
    printf("enter weight:");
    scanf("%f",&w);
    printf("enter height:");
    scanf("%f",&h);

    ans=h*h/w;

    if(ans<15)
    {
        printf("Starvation ");
    }
    else if(ans>=15.1 && ans<=17.5)
    {
        printf("Anorexic");
    }
    else if(ans>=17.6 && ans<=18.5)
    {
        printf("Underweight");
    }
    else if(ans>=18.6 && ans<=24.9)
    {
        printf("Ideal");
    }
    else if(ans>=25 && ans<=25.9)
    {
        printf("Overweight ");
    }
    else if(ans>=30 && ans<=30.9)
    {
        printf("Obese");
    }
    else if(ans>=40)
    {
        printf("Morbidly obese");
    }
}