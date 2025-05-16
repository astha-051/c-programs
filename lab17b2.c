#include<stdio.h>
#include<string.h>
typedef struct date
{
    int date;
    int month;
    int year;
}d;
void main()
{
    d d1;

    printf("enter date:");
    scanf("%d",&d1.date);

    printf("enter month:");
    scanf("%d",&d1.month);

    printf("enter year:");
    scanf("%d",&d1.year);

   char array[]={31,28,31,30,31,30,31,31,30,31,30,31};

   if((d1.year%4==0 && d1.year%100!=0)  || (d1.year%400==0))
   {
        array[1]=29;
   }

   if(d1.year>0 && d1.date>0 && d1.month>0  && d1.month<=12 && d1.date<=array[d1.month-1])
   {
    printf("valid date");
   }
   else
   {
    printf("not valid");
   }
}