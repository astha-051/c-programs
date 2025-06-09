#include<stdio.h>
void main()
{
    char name[]="DELHI";
    int length;
    char *cptr=name;

    while(*cptr != '\0')
    {
        printf("%c stored at %d \n",*cptr,cptr);
        cptr++;
    }

    length= cptr - name;
    printf("length=%d \n",length);

}

//when while loop terminated the pointer cptr holds the address of null character.so,the statement length=sptr-name gives the length of string