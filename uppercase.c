#include<stdio.h>
void main()
{
    char ch;
    printf("enter ch:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("uppercase");
    }
    if(ch>='a' && ch<='z')
    {
        printf("lowercase");
    }
    if(ch>='0' && ch<='9')
    {
        printf("number");
    }
    else
    {
        printf("special character");
    }
}