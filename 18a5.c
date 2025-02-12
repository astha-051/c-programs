#include<stdio.h>
// void swap(int x,int y)
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("x=%d\n",x);
//     printf("y=%d",y);
// }

void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d",*x);
    printf("\ny=%d",*y);

}
void main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\na=%d",a);
    printf("\nb=%d",b);
}