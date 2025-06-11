#include<stdio.h>
void main()
{
    int marks[5],i;
    float per;

    printf("entere marks of five subject:");
    for(i=0;i<5;i++)
    {
        printf("subject %d",i+1);
        scanf("%d",&marks[i]);
    }

    int total_marks=0;
    for(int i=0;i<5;i++)
    {
        total_marks += marks[i];
    }
    per=(float)total_marks/500*100;
    printf("per:%.2f\n",per);

    if(per<35)
    {
        printf("fail");
    }
    else if(per>=35 && per<45)
    {
        printf("third class");
    }
    else if(per>=45 && per<60)
    {
        printf("second class");
    }
    else if(per>=60 && per<70)
    {
        printf("first class");
    }
    else if(per>=70 && per<99)
    {
        printf("distaction");
    }

}