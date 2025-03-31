#include<stdio.h>
void main()
{
    int w;
    printf("enter weight:");
    scanf("%d",&w);
    if(w<115)
    {
        printf("flyweight");
    }
    else if(w>=115 && w<=121)
    {
        printf("bantamweight");
    }
    else if(w>=122 && w<=153)
    {
        printf("feathweight");
    }
    else if(w>=153 && w<=189)
    {
        printf("middleweight");
    }
    else if(w>=190)
    {
        printf("highweight");
    }
}