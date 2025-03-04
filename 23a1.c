#include<stdio.h>
struct student
{
    char name[10];
    int rollno.;
    int backlogs;
};
void main()
{
    styruct students[8];
    for(int i=0;i<8;i++)
    {
        printf("enter student's name:");
        scanf("%s",s[i].name);
        printf("enter student's rollno.");
        scnaf("%d",&s[i].rollno.);
        printf("enter student's backlog:");
        scanf("%d",&s[i].backlog);
    }

    for(int i=0;i<8;i++)
    {
        fprintf("student name:%s",s[i].name);
        fprintf("student's rollno.:%d",s[i].rollno.);
        fprintf("student's backlog:%d",s[i].backlog);
    }
}
