#include<stdio.h>
void main()
{
    char ch;
    printf("enter ch:");
    scanf("%c",ch);

    (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')?printf("alphabet"):printf("not alphabet");
}