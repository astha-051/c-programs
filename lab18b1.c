#include<stdio.h>
void main()
{
    FILE *fp1,*fp2,*fp3;

    fp1=fopen("astha.txt","r");
    fp2=fopen("princi.txt","r");
    fp3=fopen("merged.txt","w");

    char ch=fgetc(fp1);
    char ch2;

    while(ch!=EOF)
    {
        fputc(ch,fp3);
    }

    while(ch2=fgetc(fp2)!=EOF)
    {
        fputc(ch2,fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("file mergerd");
}