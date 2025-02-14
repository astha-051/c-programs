#include<stdio.h>
#include<string.h>

void replace(char *str, char old_char, char new_char)
{
    while(*str != '\0')
    {
        if(*str==old_char)
        {
            *str = new_char;
        }
        str++;
    }
}
int main()
{
    char str[] = "hello, world";
    char old_char = 'o';  
    char new_char = 'a'; 

    printf("Original string: %s\n", str);

    replace(str, old_char, new_char);

    printf("Modified string: %s\n", str);

    return 0;
}
