#include<Stdio.h>
void main()
{
    int a,i,temp;
    printf("enter a:");
    scanf("%d",&a);

    printf("factors are=");

    for(i=1;i<=a;i++)       //a=12;     i=1; 12-1;11-2;10-1;9-1;8-1;7-1;6-1;5-1;4-1;3-1;2-1;1-1=0;temp=0  i=2;  12-2;10-2;8-2;6-2;4-2;2-2;temp=0
    {
        temp=a;                 //i=3;  12-3;9-3;6-3;3-3;temp=0   i=4; 12-4;8-4;4-4;trmp=0;     i=5;12-5;7-5=2;trmp!=0;   like wise 12;

        while(temp>0)
        {
            temp-=i;
        }

        if(temp==0)
        {
            printf("%d\n",i);
        }
    }
}