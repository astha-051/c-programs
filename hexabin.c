#include<stdio.h>
void main()
{
    char n; 
    int d;
    printf("enter hexa number:");
    scanf("%c",&n);

    if(n>= '0' && n<= 'f')
    {
      d=n-'0';  
    }
    else if(n>= 'a'  && n<= 'f')
    {
        d=n- 'a'+10;
    }
    else if(n>= 'A'  && n<= 'F')
    {
        d=n- 'A'+10;
    }
    else
    {
        printf("invalid choice");
    }

     int b[4];

    for(int i=0;i<4;i++)
    {
        b[i]=d%2;
        d=d/2;
    }
    printf("the binary form is:");
    for(int i=0;i<4;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
}