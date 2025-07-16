#include<stdio.h>
void main()
{
    int a[20][2];

    for( int i=0;i<20;i++)
    {
        printf("enetr roll number for student%d:",i+1);
        scanf("%d",&a[i][0]);

        printf("enrer marks for student%d:",i+1);
        scanf("%d",a[i][1]);
    }
    printf("\nroll number and marks of student:\n");
    for(i=0;i<20;i++)
    {
        printf("student %d: roll no.: %d,marks:%d\n",i+1,a[i][0],a[i][1]);
    }
}