#include<stdio.h>
void main()
{
    int *arr[3];
    int a=10,b=20,c=30;
    int *ptr;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    printf("arr[0]=%d\n",*arr[0]);
    printf("arr[1]=%d\n",*arr[1]);
    printf("arr[2]=%d\n",*arr[2]);

}