#include<stdio.h>
void main()
{
    // char ch;
    // printf("enter charachter:");
    // scanf("%c",&ch);

    int n;
    printf("emter n:");
    scanf("%d",&n);

    // if(ch>='a' && ch<='z')
    if(n>=97 && n<=122)
    {
        printf("lower case");
    }
    // if(ch>='A' && ch<='Z')
    if(n>=65 && n<=90)
    {
        printf("upper case");
    }
    // if(ch>='0' && ch<='9')
    if(n>=48 && n<=57)
    {
        printf("number");
    }
    else if(n>=0 && n<=47 || n>=58 && n<=64 || n<=91 && n<=96 || n<=123 && n<=127)
    {
        printf("special");
    }
    // else
    // {
    //     printf("special symbols");
    // }
}