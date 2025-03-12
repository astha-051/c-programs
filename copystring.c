#include<stdio.h>
#include<string.h>
void stringcpy(char*s1,char*s2)
{
    int i=0;
    while(s2[i]!='0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='0';
}
void main()
{
    char s1[100],s2[100];

    printf("enter string 1:");
    gets(s1);
    printf("enter string 2:");
    gets(s2);

    stringcpy(s2,s1);
    printf("string1:%s \n strings2:%s",s1,s2); 
}