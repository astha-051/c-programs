#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
    char name[10];
    int id;
    char grade[10];
}stu;
void main()
{
    stu s1;
    FILE *fp1;

    printf("enter student name:");
    scanf("%s",s1.name);
    printf("enter  age of that student:");
    scanf("%d",&s1.age);
    printf("enter grade:");
    scanf("%s",s1.grade);

    fp1=fopen("abc.txt","a");
    
}