#include<stdio.h>
void main()
{
    int a,choice,ans=1,i,end=0;
    printf("enter a:");
    scanf("%d",&a);

    printf("enter 1 fcatorial:\n");
    printf("enter 2 for prime:\n");
    printf("emter 3 for odd evenL:\n");
    printf("enter 4 for exit:\n");
    scanf("%d",&choice);
    while(1)
    {
        printf("enter your choice:\n");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        for(i=1;i<=a;i++)
        {
            ans=ans*i;
        }
        printf("factorial=%d\n",ans);
        break;

        case 2:
        if(a%i==0)
        {
            printf("%d is not proime\n");
        }
        else
        {
            printf("%d is prime\n");
        }
        break;

        case 3:
        if(a%2==0)
        {
            printf("%d is ecven\n");
        }
        else
        {
            printf("%d is odd\n");
        }
        break;

        case 4:
            end=1;
            break;
    }
    if(end==1)
    {
        break;
    }
    }


}