#include<stdio.h>
#include<string.h>
void main()
{
    float age;
    char str1[20],str2[5];

    printf("enter age:");
    scanf("%f",&age);
    printf("enter sex:");
    scanf("%s",&str2);
    printf("enter marital status:");
    scanf("%s",str1);

    if(strcmp(str1,"married")==0)
    {
        printf("insured");
    }

    else if(strcmp(str2,"male")==0 && strcmp(str1,"unmarried")==0 && age>30)
    {
        printf("insured");
    }

    else if(strcmp(str2,"female")==0 && strcmp(str1,"unmarried")==0 && age>25)
    {
        printf("insured");
    }
    
    else
    {
        printf("not insured");
    }

}