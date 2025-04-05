#include<stdio.h>
void main()
{
    int r; 
    while(1)
    { 
    printf("enter radius:");
    scanf("%d",&r);
    

    if(r<0)
    {
        printf("programme is terminated");
        break;
    }

    float volume=4*22/7*r*r;
    printf("%f\n",volume);
    }
}