#include<stdio.h>
void main()
{
    int a[20];
    int pass=0,fail=0,firstclass=0,dist=0;
    
    for(int i=0;i<20;i++)
    {
        printf("enter marks:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<20;i++)
    {
        if(a[i]<40)
        {
            fail++;
        }
        else if(a[i]>41 && a[i]<60)
        {
            pass++;
        }
        else if(a[i]>61 && a[i]<80)
        {
            firstclass++;
        }
        else 
        {
            dist++;
        }
    }

    printf("fail=%d\n",fail);
    printf("pass=%d\n",pass);
    printf("first-class=%d\n",firstclass);
    printf("distinction=%d\n",dist);
}