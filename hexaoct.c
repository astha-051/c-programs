#include<stdio.h>
#include<string.h>
void main()
{
    char h[10];
    int o=0;d=0;i=0;j=1;

    printf("enter hexa number for octal:");
    scanf("%s",h);

    for(i=0;i<strlen(h);i++)
    {
        if(h[i]>= '0' && h[i]<='9')
        {
            d=d*16+(h[i]-'0');
        }
        else if(h[i]>='a'&& h[i]<='f')
        {
            d=d*16+(h[i]-'a'+10);
        }
        else if(h[i]>='A'&& h[i]<='F')
        {
            d=d*16+(h[i]-'A'+10);
        }
        else
        {
            printf("invalid choice");
        }
    }

    int t=d;
    while(t!=0)
    {
        o=o+(o%8)*j;
        t=t/8;
        j=j*10;
    }
    printf("octal=%d",o);
}