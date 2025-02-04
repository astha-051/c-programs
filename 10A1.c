#include<stdio.h>
void main()
{
    int n,lastdigit,fd,sum=0;
    printf("Enter a nmbr");
    scanf("%d",&n);
    lastdigit=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    sum=fd+lastdigit;
    printf("sum of fd and ld=%d",sum);

}

