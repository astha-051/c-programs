#include<stdio.h>
void main()
{
    FILE *fp1;
    char ch;
    int l=0,t=0,c=0,w=0;
    fp1=fopen("abc.txt","r");
    ch=getc(fp1);

    while(ch!=EOF)
    {
        if(ch=='\n')
        {
            l++;
        }
        else  if(ch=='\t')
        {
            t++;
        }
        else if(ch==' ')
        {
            w++;
        }
        else
        {
            c++;
        }
    }

    fclose(fp1);
    printf("lines=%d",l);
    printf("tab=%d",t);
    printf("words=%d",w);
    printf("characters=%d",c);

}