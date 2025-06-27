#include<stdio.h>
void main()
{
    int x,y;
    int *ptr;

    x=10;
    ptr=&x;
    y=*ptr;

    printf("x=%d \t address of x=%d\n",x,&x);  //x==*&x==*ptr   &x==ptr

    printf("x=%d \t address of =%d\n",*&x,&x);

    printf("x=%d \t stored at=%d\n",*ptr,ptr);

    printf("x's add=%d \t stored at=%d\n",ptr,&ptr);

    printf("y=%d \t address of y=%d\n",y,&y);

    x=25;

    printf("x=%d \t address of x=%d\n",x,&x);
}