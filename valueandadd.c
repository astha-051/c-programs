#include<stdio.h>
void main()
{
    int x=10,y=20;

    printf("%d is stored at  %d\n",x,&x);
    printf("%d is stored at %d",y,&y);
}