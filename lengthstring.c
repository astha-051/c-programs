#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("string=%s",str);
    printf("length of string=%lu",strlen(str)-1);
}