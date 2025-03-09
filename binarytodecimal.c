#include<stdio.h>
void main()
{
    int n;
    printf("enter  a binary number:");
    scanf("%d",&n);
    int a=1;
    int ans=0;

    while(n!=0)                             //binary=1011
    {                                      //ans=0:0+1*1=1;   a=1*2;  ans=1:1+1*2=3; a=4; ans=3+0*4=3; a=8; ans=3+1*8=11; a=16;
        ans=ans+(n%10)*a;
        n=n/10;
        a=a*2;
    }

    printf("%d",ans);
}



// int a = 1;: The variable a is initialized to 1. This will be used to keep track of powers of 2. 
// For example, for the least significant bit (rightmost),
//  the multiplier will be 1, for the next bit it will be 2, then 4, 8, and so on (powers of 2).

// n = n / 10: This operation divides n by 10 (integer division), effectively removing the last digit. 
// The remaining digits are shifted one place to the right, and the loop processes the next digit.