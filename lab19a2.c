#include<stdio.h>
#include<stdlib.h>
void main()
{
int **arr;
int raw,col,sum=0;

printf("enter raw of matrix:");
scanf("%d",&raw);
printf("enter col of matrix:");
scanf("%d",&col);

arr=(int **)malloc(raw*sizeof(int ));
for(int i=0;i<raw;i++)
{
    arr[i]=(int *)malloc(col*sizeof(int));
}

for(int i=0;i<raw;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("enter elemets of[%d][%d]:",i,j);
        scanf("%d",&arr[i][j]);
        sum+=arr[i][j];
    }
}

for(int i=0;i<raw;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
printf("%d",sum);

free(arr);
}