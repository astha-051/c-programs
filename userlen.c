#include<stdio.h>
int len(int n)
{
    int length=0;

    if(n==0)
    {
        return 1;
    }
    while(n!=0)
    {
        n=n/10;
        length++;
    }
    return length;
}
void main()
{
    int n,length;
    printf("enter n:");
    scanf("%d",&n);

    length=len(n);

    printf("length of number  is:%d",length);

}