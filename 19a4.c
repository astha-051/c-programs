#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="hello,world";
    char ch='h';

    char *position = strchr(str,ch);

    if(position!=NULL)
    {
        printf("%c found at index:%ld\n",ch, position - str);
    }
    else
    {
        printf("ch is not found");
    }
}