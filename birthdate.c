#include<stdio.h>
void main()
{
    int d,m,y,age,cd,cm,cy;
    printf("enter date:");
    scanf("%d",&d);
    printf("enter month:");
    scanf("%d",&m);
    printf("enter year:");
    scanf("%d",&y);
    printf("entercurrent date:");
    scanf("%d",&cd);
    printf("enter current month:");
    scanf("%d",&cm);
    printf("enter current year:"); 
    scanf("%d",&cy);
    
    int age=calculateage(birthdate,currentdate);

    printf("age=%d",age);
}