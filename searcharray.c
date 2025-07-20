#include<stdio.h>
void main()
{
    int a[4];
    int search,found=0;

    for(int i=0;i<4;i++)
    {
        printf("enter the value of %d:",i);
        scanf("%d",&a[i]);
    }

    printf("enter the number  to search:");
    scanf("%d",&search);

    for(int i=0;i<4;i++)
    {
        if(a[i]==search)
        {
            printf("element %d found at index %d",search,i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("element is not found");
    }
}