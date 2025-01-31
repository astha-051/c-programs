#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    char ch;
    int count=0;
    fp1=fopen("abc.txt","r");
    fp2=fopen("xyz.txt","w");
    while(ch=getc(fp1)!=EOF)
    {
        if(ch=='\n')
        {
            count++;
        }
    }
    rewind(fp1);
    count=0;
    while(ch=getc(fp1)!=EOF)
    {
        if(ch=='\n')
        {
            count++;
        }
    
    if(count==2)
        {
            putc(ch,fp2);
        }
    if(count>2)
    {
        break;
    }
    }
    fclose(fp1);
    fclose(fp2);
}
// #include<stdio.h>
// #include<stdlib.h>

// void main() {
//     FILE *fp1, *fp2;
//     char ch;
//     int count = 0;

//     fp1 = fopen("abc.txt", "r");  // Open the first file in read mode
//     fp2 = fopen("xyz.txt", "w");  // Open the second file in write mode

//     if (fp1 == NULL || fp2 == NULL) {
//         printf("Error opening files!\n");
//         return;
//     }

//     // Count the number of lines in the file
//     while ((ch = getc(fp1)) != EOF) {
//         if (ch == '\n') {
//             count++;
//         }
//     }

//     // Go back to the beginning of the file for copying the 3rd line
//     rewind(fp1);

//     // Reset count for copying lines
//     count = 0;
//     while ((ch = getc(fp1)) != EOF) {
//         if (ch == '\n') {
//             count++;
//         }

//         // When the 3rd line is reached, start copying it to the second file
//         if (count == 2) {  // 0-based index, so count == 2 corresponds to the 3rd line
//             putc(ch, fp2);  // Write character to the second file
//         }

//         // After copying the 3rd line, stop reading the file
//         if (count > 2) {
//             break;
//         }
//     }

//     fclose(fp1);  // Close the first file
//     fclose(fp2);  // Close the second file
// }
