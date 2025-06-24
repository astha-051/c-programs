#include<stdio.h>
void main()
{
    int a=10,b=5;
    int *ptr1,*ptr2;
    int x,y,z;

    ptr1=&a;
    ptr2=&b;

    // x=*ptr1 + *ptr2;
    // y=*ptr1 - *ptr2;

   x= *ptr1 / *ptr2 +*ptr1 * *ptr2 - *ptr1;
   *ptr1+=5;
   *ptr2-=10;

    printf("x=%d \n",x);
    printf("y=%d \n",y);

    printf("ptr1=%d \n",*ptr1);
    printf("ptr2=%d \n",*ptr2);
}