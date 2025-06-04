#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *str;
    char *rev;

    int n;
    printf("enter length of string:");
    scanf("%d",&n);

    str=(char *)malloc((n+1)*sizeof(char));  //string has null at last
    rev=(char *)malloc((n+1)*sizeof(char));

    printf("enter a string:");
    scanf("%s",str);
    
    int len=strlen(str);

    for(int i=0;i<n;i++)
    {
        rev[i]=str[len-i-1];
    }

    printf("reverse string:%s",rev);

    free(str);
    free(rev);
}