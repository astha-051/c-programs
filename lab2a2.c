#include<stdio.h>
void main()
{
	int a,b,ans;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	ans=a*b;
	if(a*b>a/2)
	{
		printf("greater than half of a");
	}else
	{
		printf("not greater than half of a");
	}
}
