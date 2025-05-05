#include<stdio.h>
int main()
{
    char str[100],clean[100];
    int i=0,j=0,left,right;

    printf("enter a string:");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)  //remove all alphanumeric and convert into lower case
    {
        if((str[i]>='A' && str[i]<='Z')  || (str[i]>='a' && str[i]<='z') ||  (str[i]>='0' && str[i]<='9'))
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                clean[j++]=str[i]+32;  // if uppercase than convert into lower
            }
            else 
            {
                clean[j++]=str[i];   //not upercase reamin as it is
            }
        }
    }

    clean[j]='\0';

    left=0;
    right=j-1;

    while(left<right)
    {
        if(clean[left]!=clean[right])
        {
            printf("not palindrome");
            return 0;  //stop
        }

        left++;
        right--;
    }

    printf("palindrome");
    return 0;
}