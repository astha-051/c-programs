#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],*left,*right,temp;

    printf("enter a string:");
    scanf("%s",str);

    left=str;  //start  pointer
    right=str+strlen(str)-1;  //end pointer


    while(left<right)
    {
        temp=*left;
        *left=*right;
        *right=temp;

        left++;
        right--;
    }

    printf("reverse string=%s",str);
}