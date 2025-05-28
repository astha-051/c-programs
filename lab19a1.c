#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr;
    int n,sum=0;

    printf("enter array index:");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("enter an array elements:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("%d",sum);

    free(arr);

}