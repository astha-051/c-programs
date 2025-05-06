#include<stdio.h>
void main()
{
    int a[4]={1,2,3,4};
    int *p=a;

    int max=*p;
    int min=*p;


    for(int i=1;i<=4;i++)
    {
        if(max<*p)
        {
            max=*p;
        }
        if(min>*p)
        {
            min=*p;
        }
        *p++;
    }

    // for(int i=1;i<=4;i++)
    // {
       
    //     *p++;
    // }

    printf("max=%d",max);
    printf("\nmin=%d",min);
}