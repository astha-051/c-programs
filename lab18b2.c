    #include<stdio.h>
    #include<stdlib.h>

    void main()
    {
        FILE *fp1;

        fp1=fopen("abc.txt","r");
        char ch;
        int words=0;

        while((ch=fgetc(fp1))!=EOF)
        {
            if(ch==' ' || ch== '\n' || ch=='\t')
            {
                words++;
            }
        }

        printf("words=%d",words);
    }