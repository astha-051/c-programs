#include<stdio.h>
void main()
{
    FILE *fp;
    int a=5;
    fprintf(fp,"hello world");
    fprintf(fp,"%d",a);
}