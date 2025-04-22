#include<stdio.h>
void main()
{
    int a[25];
    int pos=0,nag=0;
    int even=0,odd=0;

    for(int i=1;i<=25;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);

        if(a[i]<0)
        {
            nag++;
        }
        if(a[i]>0)
        {
            pos++;
        }

        if(a[i]%2==0)
        {
            even++;
        }
        if(a[i]%2!=0)
        {
            odd++;
        }
    }


    printf("even=%d\n",even);
    printf("odd=%d\n",odd);
    printf("positive=%d\n",pos);
    printf("nagative=%d\n",nag);

}