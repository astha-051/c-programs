#include<stdio.h>
void main()
{
    int a,b,c,d,e,total;
    float per;
    printf("enter a subject mark:");
    scanf("%d",&a);
    printf("enter  bsubject mark:");
    scanf("%d",&b);
    printf("enter c subject mark:");
    scanf("%d",&c);
    printf("enter d subject mark:");
    scanf("%d",&d);
    printf("enter e subject mark:");
    scanf("%d",&e);

    total=a+b+c+d+e;
    per=(total/500)*100;
    printf("per=%d",per);

    if(per>=70)
    {
        printf("distinct");
    }
    else if(per>=61 && per<70)
    {
        printf("first  class");
    }
    else if(per>=46 && per<61)
    {
        printf("second class");
    }
    else if(per>=36 && per<46)
    {
        printf("third class");
    }
    else if(per<35)
    {
        printf("fail");
    }
}