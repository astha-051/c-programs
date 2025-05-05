#include<stdio.h>
#include<string.h>
void main()
{
    char c[100],stack[100];
    int top=-1;

    printf("enter a string of bracket:");
    scanf("%s",c);

    int length=strlen(c);

    for(int i=0;i<length;i++)
    {
        char ch=c[i];

        if(ch=='(' || ch=='{' || ch=='[')
        {
            stack[++top]=ch;
        }

        else 
        {
            if(top==-1)
            {
                printf("string is not valid");
                return;  //exit function immediatly
            }   

            char bottom=stack[top--];
            
            if((bottom=='{' && ch!='}')  ||  (bottom=='[' && ch!=']')  ||  (bottom=='(' && ch!=')'))
            {
                printf("string is not valid");
                return;
            }
        }
    }

    if(top==-1)
    {
        printf("string is valid");
    }
    else 
    {
        printf("string is not valid");
    }
}


// Input: ")()"

// The first character is ')', but the stack is empty (top == -1).
// The program prints "String is not valid\n".
// return; stops execution immediately.
// Without return;, it would continue checking the rest of the string, which is incorrect.
// Case 2: Mismatched Brackets
// Input: "{(])}"

// The program pushes { and ( onto the stack.
// It encounters ']' but expects ')', so it's invalid.
// "String is not valid\n" is printed.
// return; ensures no further checks happen.