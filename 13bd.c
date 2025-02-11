#include<stdio.h>
void main()
{
    int i,j;
    int a=65;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==3 || i==5)
            {
                printf("%d",j);
            }
            else
            {
                printf("%c",a);
                a++;
            }
        }
        printf("\n");
    }
}