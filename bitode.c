#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    char b[32];
    int d=0,i,len;

    printf("enter a number:");
    scanf("%s",&b);

    len=strlen(b);

    for(i=0;i<len;i++)
    {
        if(b[i]=='1')
        {
            d=d+pow(2,len-i-1);
        }
    }
    printf("decimal=%d",d);
}