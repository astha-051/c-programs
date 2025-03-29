#include<stdio.h>
void main()
{
    int x1=5,x2=6,x3=8,y1=4,y2=1,y3=5;
    int m1,m2,m3;

    m1=y2-y1/x2-x1;
    m2=y3-y2/x3-x2;
    m3=y3-y1/x3-x1;

    if(m1==m2 && m2==m3 && m3==m1)
    {
        printf("fall on staright line");
    }
    else 
    {
        printf("not fall on straight line");
    }

}