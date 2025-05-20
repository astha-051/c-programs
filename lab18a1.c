#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp1,*fp2;

    char ch[10];

    fp1=fopen("astha.txt","w");
    fp2=fopen("princi.txt","a");

    printf("enter a string:");
    scanf("%s",&ch);

    int length=strlen(ch);

    for(int i=0;i<length;i++)
    {
        fputc(ch[i],fp2);
    }

   

    fclose(fp1);
    fclose(fp2);
}