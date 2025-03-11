#include<stdio.h>
void main()
{
    float r,g,b,white,cyan,magenta,yellow,black;
    printf("enter r:");
    scanf("%f",&r);
    printf("enter g:");
    scanf("%f",&g);
    printf("entre b:");
    scanf("%f",&b);

    r=r/255;
    g=g/255;
    b=b/255;

    white=((r>g)?(r>b?r:b):(g>b?g:b));

    cyan=(white-r/255)/white;
    magenta=(white-g/255)/white;
    yellow=(white-b/255)/white;
    black=(1-white);

    printf("it is=%f",white);
    printf("it is=%f",cyan);
    printf("it is=%f",magenta);
    printf("it is=%f",yellow);
    printf("it is=%f",black);
}