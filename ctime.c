#include<stdio.h>
#include<time.h>
void main()
{
    time_t currenttime;
    time(&currenttime);
    char*timestring=ctime(&currenttime);
    printf("%s",timestring);

}