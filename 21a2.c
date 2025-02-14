#include<stdio.h>
struct book
{
    char author[10];
    char title[10];
    int publication;
    float price;
};
void main()
{
    struct book b[3];
    for(int i=0;i<3;i++)
    {
        printf("enter author name:");
        scanf("%s",&b[i].author);
        printf("enter title:");
        scanf("%s",&b[i].title);
        printf("enter publication of book:");
        scanf("%d",&b[i].publication);
        printf("enter price:");
        scanf("%f",&b[i].price);
    }

    for(int i=0;i<3;i++)
    {
        printf("author=%s",b[i].author);
        printf("title=%s",b[i].title);
        printf("publication=%d",b[i].publication);
        printf("price=%f",b[i].price);
    }
}