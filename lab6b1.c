#include<stdio.h>
void main()
{
    int i=1,n,pos=0,nag=0;
    float c1=0,c2=0;
    float avg1,avg2,b;
    printf("enter n:");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("enter b:");
        scanf("%f",&b);

        if(b>0)
        {
            pos+=b;
            c1++;
        }

        else if(b<0)
        {
            nag+=b;
            c2++;
        }
        i++;
    }


        avg1=pos/c1;
    
        avg2=nag/c2;
    

    printf("avg1=%f\n",avg1);
    printf("avg2=%f",avg2);

}