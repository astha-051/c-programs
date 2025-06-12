#include<stdio.h>
void main()
{
    int a;
    printf("enter month:");
    scanf("%d",&a);

    switch(a)
    {
        case 1:printf("january-31");
        break;
        case 2:printf("february-29");
        break;
        case 3:printf("march-31");
        break;
        case 4:printf("april-30");
        break;
        case 5:printf("may-31");
        break;
        case 6:printf("june-30");
        break;
        case 7:printf("july-31");
        break;
        case 8:printf("august-31");
        break;
        case 9:printf("september-30");
        break;
        case 10:printf("october-31");
        break;
        case 11:printf("novembeer-30");
        break;
        case 12:printf("december-31");
        break;
        default:printf("invalid choie");
        break;
    }
}