#include<stdio.h>
void main()
{
    FILE *fp1;

    fp1=fopen("astha.txt","r");

    char search,ch;
    int line=1;

    printf("enter a char to  search:");
    scanf(" %c",&search);

    while(ch=fgetc(fp1)!=EOF)
    {
        if(search==ch)
        {
            printf("char find at:%d",line);
        }
        if(search=='\n')
        {
            line++;
        }
    }
    fclose(fp1);
}