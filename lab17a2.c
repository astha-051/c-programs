#include<stdio.h>
typedef  struct  book{
    char name[10];
    int roll;
    int marks[5];
    int sum;
}book;
float avg(struct book b)
{
   
    return (float)b.sum/5;
}
void main()
{
    book b[3];
    float count[3];
    for(int i=0;i<3;i++)
    {
        printf("enter name:");
        scanf("%s",b[i].name);
        printf("enter rollno.:");
        scanf("%d",&b[i].roll);
        printf("enter marks:");
        for(int j=0;j<5;j++)
        {
            scanf("%d",&b[i].marks[j]);
            b[i].sum+=b[i].marks[j];
        }
        count[i]=avg(b[i]);
    }

    for(int i=0;i<3;i++)
    {
        printf("name=%s",b[i].name);
        printf("roll no=%d",b[i].roll);
       for(int j=0;j<5;j++)
       {
        printf("marks=%d",b[i].marks[j]);
       }
       printf("sum=%d",b[i].sum);
       printf("avg=%f",count[i]);
    }

}