#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    int len;
    printf("enter a string:");
    gets(str);
    len=strlen(str);
    printf("length=%d",len);
}