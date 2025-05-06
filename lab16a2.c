#include<stdio.h>
void main()
{
    int n;

    printf("enter an array number:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter an elements:");
        scanf("%d",&a[i]);
    }

    int *left=a;
    int *right=a+(n-1);

    while(left<right)
    {
        while(*left%2==0 && left<right)
        {
            left++;
        }
        while(*right%2==1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            int temp=*left;
            *left=*right;
            *right=temp;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}