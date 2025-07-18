#include<stdio.h>
void main()
{
    float basicsalary,hra,da,grosssalary;
    printf("enter basic salary:");
    scanf("%f",&basicsalary);

    if(basicsalary>=10000)
    {
        hra=basicsalary*0.20;
        da=basicsalary*0.8;
    }
    else if(basicsalary>=20000)
    {
        hra=basicsalary*0.25;
        da=basicsalary*0.9;
    }   
    else if(basicsalary>=30000)
    {
        hra=basicsalary*0.30;
        da=basicsalary*0.95;
    }

    grosssalary=basicsalary+hra+da;

    printf("grosssalary=%f",grosssalary);
}