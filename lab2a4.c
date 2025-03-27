#include<stdio.h>
void main()
{
	int a,b;
	
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	if(a%b)
	{
		printf("a is divisible by b");
	}else
	{
		printf("a is not divisible by b");
	}
}
