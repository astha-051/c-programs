#include<stdio.h>
void main()
{
    int r;
    float ans;
    for(int i=1;;i++)
    {
        printf("enter redius:");
        scanf("%d",&r);

        ans=4*22/7*r*r;
        printf("ans=%f\n",ans);

        if(r<0)
        {
            printf("terminated");
            break;
        }
    }

    
}