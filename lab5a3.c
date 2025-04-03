#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character:");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'o':
        printf("vowels");
        break;
        default:printf("invalid option");
        break;
    }
}