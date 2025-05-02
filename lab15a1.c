#include<stdio.h>
#include<string.h>
void main()
{
    char s[10000];
    int i;

    printf("enter a number:");
    scanf("%s",s);

    int len=strlen(s);
    int temp=1;
    
    for(i=len-1;temp && i>=0;i--)
    {
        if(s[i]=='9')
        {
            s[i]='0';
            temp=1;
        }
        else
        {
            s[i]+=1;
            temp=0;
        }
    }

    if(temp==1)
    {
        for(i=len;i>=0;i--)
        {
            s[i+1]=s[i];
        }
        s[0]='1';
    }
    printf("%s",s);
}