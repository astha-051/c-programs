#include<stdio.h>

int value(char c)
{
    switch (c)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default:return 0;
    }
}

int roman(char *s)
{
    int total=0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i+1]!='\0' && value(s[i])<value(s[i+1]))
        {
            total-=value(s[i]);  //subtract if value is smaller
        }
        else 
        {
            total+=value(s[i]);  //add if value is greater
        }
    }
    return total;
}

int main()
{
    char ch[10];

    printf("enter a roman number:");
    scanf("%s",ch);

    printf("%d",roman(ch));

    return 0;
}