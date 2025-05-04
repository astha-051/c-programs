#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];

    printf("enter a string:");
    scanf("%s",ch);

    int length=strlen(ch);
    int len=0;
    int i=length-1;

    while(i>=0 && ch[i]==' ')  //skip spacing
    {
        i--;
    }

    while(i>=0 && ch[i]!=' ')
    {
        len++;
        i--;
    }

    printf("length=%d",len);
}