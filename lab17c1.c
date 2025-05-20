#include<stdio.h>
typedef struct {
    int book_id;
    char book_title[10];
    char book_author[10];
    int avilable;
}book;

typedef struct {
    int member_id;
    char member_name[10];
    int issue_book_id;
}member;
void main()
{
    book b1[100];
    member m1[100];
    int book_count=0,member_count=0;
    int choice,i=0,j=0,memberid,bookid;

    while(1)
    {
        printf("enter 1 for add book \n enter 2 for add member \n enter 3 for issue book \n enter 4 for display data \n enter 5 for exit\n:");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("enter book id ,title and author:");
            scanf("%d",&b1[book_count].book_id);
            scanf("%s",b1[book_count].book_title);
            scanf("%s",b1[book_count].book_author);
            b1[book_count].avilable=1;
            book_count++;
        }


        else if(choice == 2)
        {
            printf("enter member id and name:");
            scanf("%d",&m1[member_count].member_id);
            scanf("%s",m1[member_count].member_name);
            m1[member_count].issue_book_id=-1;
            member_count++;
        }

        else if(choice == 3)
        {
            printf("enter member id and book id you wanna issue:");
            scanf("%d",&memberid);
            scanf("%d",&bookid);


            for(i=0;i<member_count;i++)
            {
                if(m1[i].member_id == memberid)
                {
                    memberid=1;
                    break;
                }
            }

            for(int j=0;i<book_count;j++)
            {
                if(b1[j].book_id==bookid && b1[j].avilable==1)
                {
                    b1[j].avilable=0;
                    m1[i].issue_book_id=bookid;
                    break;
                }
            }

            if(j==book_count)
            {
                printf("book is not avialable\n");
            }

        }

        else if(choice == 4)
        {
            printf("\n member and their issue book:");

            for(int i=0;i<member_count;i++)
            {
                printf("\n id=%d \n name=%s \n issue book:",m1[i].member_id , m1[i].member_name);
                if(m1[i].issue_book_id==-1)
                {
                    printf("none");
                }
                else 
                {
                   for(j=0;j<book_count;j++)
                   {
                    if(b1[j].book_id==m1[i].issue_book_id)
                    {
                        printf("%d (%s by %s)\n", b1[j].book_id, b1[j].book_title, b1[j].book_author);
                    }
                   }
                }
            }
        }

        else if(choice == 5)
        {
            printf("exit");
            break;
        }
    }

}