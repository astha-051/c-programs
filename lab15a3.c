#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10],ch1[10],ch2[10],prefix[10];
    int i=0;

    printf("enter first string:");
    scanf("%s",ch);

    printf("enter second string:");
    scanf("%s",ch1);

    printf("enter third string:");
    scanf("%s",ch2);

    while(ch[i] && ch1[i] && ch2[i] && (ch[i]==ch1[i]) && (ch1[i]==ch2[i]))  //++ if all are  equals
    {
        prefix[i]=ch[i];
        i++;
    }

    printf("%s",prefix);
}