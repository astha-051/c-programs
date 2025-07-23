#include<stdio.h>
void main()
{
    int p,r,n;
    float si;
    printf("enter p:");
    scanf("%d",&p);
    printf("enter r:");
    scanf("%d",&r);
    printf("enter n:");
    scanf("%d",&n);

    si=p*r*n/100;
    printf("si=%f",si);
}
