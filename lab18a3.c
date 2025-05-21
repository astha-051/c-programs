#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp1;

    fp1=fopen("astha.txt","a");

    char ch[10];

    printf("enter a string:");
    scanf("%s",&ch);

    int length=strlen(ch);

    for(int i=0;i<length;i++)
    {
        fputc(ch[i],fp1);
    }

    fclose(fp1);
}