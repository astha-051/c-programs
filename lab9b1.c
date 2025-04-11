#include<stdio.h>
void main()
{
    int i,n,a;
    int nag=0,h=0;
    int pos=0,p=0;

    printf("enter a floating number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("enter a number:");
        scanf("%d",&a);

        if(a<0)
        {
            nag+=a;
            h++;
        }

        else
        {
            pos+=a;
            p++;
        }
    }
                printf("%d",h);

    float nagavg = nag/h;
    float posavg = pos/p;


    printf("nagative avg=%f\n",nagavg);
    printf("positive avg=%f",posavg);
}