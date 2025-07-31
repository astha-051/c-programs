#include<stdio.h>
void main()
{
    int *ptr,sum=0;
    int arr[5]={1,2,3,4,5};
    ptr=arr;

    printf("element \t value \t address \n");

    for(int i=0;i<5;i++)
    {
        printf("%d \t %d \t %d \n",i,*ptr,ptr); 

        sum+=*ptr;

        *ptr++;
    }

    printf("sum=%d \n",sum);

    printf("first index address=%d \n",&arr[0]);

    printf("adress of pointer=%d \n",ptr);
}