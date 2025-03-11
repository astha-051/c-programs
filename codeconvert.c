#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
    int number;

    printf("enter a number between 1 to 12 convert a  number:");
    scanf("%d",&number);

    int num,i=0,reminder,sum=0,length,decimal=0;
    int binary[32],octal[10],hexa[16];
    char hex[20];

    switch(number)
    {
        case 1:  //decimal to binary
                
                printf("enter a decimal number to convert into binary:");
                scanf("%d",&num);
                while(num>0)
                {
                    binary[i]=num%2;
                    num/=2;
                    i++;
                }
                for(int j=i-1;j>=0;j--)
                {
                    printf("%d",binary[j]);
                }
                break;

        case 2:  //decimal to octal

                printf("enter a decimal number to convert into octal:");
                scanf("%d",&num);

                while(num>0)
                {
                    octal[i]=num%8;
                    num/=8;
                    i++;
                }

                for(int j=i-1;j>=0;j--)
                {
                    printf("%d",octal[j]);
                }

                break;

        case  3:  //decimal to hexa

                printf("enter a decimal number to convert into hexa:");
                scanf("%d",&num);

                while(num>0)
                {
                    reminder=num%16;
                    if(reminder < 10)
                    {
                        hexa[i]=reminder+'0';
                    }
                    else 
                    {
                        hexa[i]=reminder-10+'A';
                    }
                    num/=16;
                    i++;
                }

                for(int j=i-1;j>=0;j--)
                {
                    printf("%c",hexa[j]);
                }

                break;

        case 4:  //binary to decimal

                printf("enter a binary number to convert into decimal:");
                scanf("%d",&num);

                while(num>0)
                {
                    reminder=num%10;
                    sum+=reminder*pow(2,i);
                    num/=10;
                    i++;
                }

                    printf("%d",sum);
                

            break;

        case 5:   //octal to decimal

                printf("enter a octal number to convert into decimal:");
                scanf("%d",&num);

                while(num>0)
                {
                    reminder=num%10;
                    sum+=reminder*pow(8,i);
                    num/=10;
                    i++;
                }

                printf("%d",sum);

            break;

        case 6: //hexa to decimal

                printf("enter a hexa number to convert into decimal:");
                scanf("%s",hex);

                length=strlen(hex);
                int index=length-1;

                while(index>=0)
                {
                    if(hex[index]>='0' && hex[index]<='9')
                    {
                        decimal+=(hex[index]-'0')*pow(16,i);
                    }
                    else if(hex[index]>='A' && hex[index]<='F')
                    {
                        decimal+=(hex[index]-'A'+10)*pow(16,i);
                    }
                    i++;
                    index--;
                }

                printf("%d",decimal);

            break;

        case 7:  //binary to octal

                printf("enter a binary number to convert into octal:");
                scanf("%d",&num);

                while(num>0)
                {
                   reminder=num%10;
                   decimal+=reminder*pow(2,i);
                    num/=10;
                    i++;
                }

                while(decimal>0)
                {
                    octal[i]=decimal%8;
                    decimal/=8;
                    i++;
                }
                for(int j=i-1;j>=0;j--)
                {
                    printf("%d",octal[j]);
                }

            break;

        case 8: //binary to hexa

                printf("enter a binary number to convert into hexa:");
                scanf("%d",&num);

                while(num>0)
                {
                    reminder=num%10;
                    decimal+=reminder*pow(2,i);
                    num/=10;
                    i++;
                }

                while(decimal>0)
                {
                    reminder=decimal%16;
                    if(reminder<=9)
                    {
                        hexa[i]=reminder+'0';
                    }
                    else 
                    {
                        hexa[i]=reminder-10+'A';
                    }
                    decimal/=16;
                    i++;
                }

                for(int j=i-1;j>=0;j--)
                {
                    printf("%c",hexa[j]);
                }

            break;

        case 9:  //octal to binary

                printf("enter a octal number to convert into binary:");
                scanf("%d",&num);

                while(num>0) //octal to decimal
                {
                    reminder=num%10;
                    decimal+=reminder*pow(8,i);
                    num/=10;
                    i++;
                }   
                i=0;

                while(decimal>0)  //decimal to binary
                {
                    binary[i]=decimal%2;
                    decimal/=2;
                    i++;
                }

                for(int j=i-1;j>=0;j--)
                {
                    printf("%d",binary[j]);
                }

            break;

        case 10: //octal to hexa

                printf("enter an octal number to convert into hexa:");
                scanf("%d",&num);

                while(num>0)  //octal to decimal
                {
                    reminder=num%10;
                    decimal+=reminder*pow(8,i);
                    num/=10;
                    i++;
                    
                }
                i=0;

                while(decimal>0)  //decimal to hexa
                {
                    
                    reminder=decimal%16;
                    if(reminder<=9)
                    {
                        hexa[i]=reminder+'0';
                    }
                    else
                    {
                        hexa[i]=reminder-10+'A';
                    }
                    decimal/=16;
                    i++;
                }
                    for(int j=i-1;j>=0;j--)
                    {
                        printf("%c",hexa[j]);
                    }
                
            break;

        case 11: //hexa to octal

                printf("enter a hexa number to convert into octal:");
                scanf("%s",hex);

                int length=strlen(hex);
                int ind=length-1;

                while(ind>=0) //hexa to decimal
                {
                    if(hex[ind]>='0' && hex[ind]<='9')
                    {
                        decimal+=(hex[ind]-'0')*pow(16,i);
                    }
                    else if(hex[ind]>='A' && hex[ind]<='F')
                    {
                        decimal+=(hex[ind]-'A'+10)*pow(16,i);
                    }
                    i++;
                    ind--;
                }

                i=0;

                while(decimal>0) //decimal to binary
                {
                    octal[i]=decimal%8;
                    decimal/=8;
                    i++;
                }

                for(int j=i-1;j>=0;j--)
                {
                    printf("%d",octal[j]);
                }

            break;

        case 12: //hexa to binary

            printf("enter a hexa number to convert into binary:");
            scanf("%s",hex);

            int leng=strlen(hex);
            int number=leng-1;

                while(number>=0)
                {
                    if(hex[number]>='0' && hex[number]<='9')
                    {
                        decimal+=(hex[number]-'0')*pow(16,i);
                    }
                    else if(hex[number]>='A' && hex[number]<='F')
                    {
                        decimal+=(hex[number]-'A'+10)*pow(16,i);
                    }
                    i++;
                    number--;
                }

                int i=0;

                while(decimal>0) //decimal to binary
                {
                    binary[i]=decimal%2;
                    decimal/=2;
                    i++;
                }

                for(int j=i-1;j>=0;j--)
                {
                    printf("%d",binary[j]);
                }

            break;

            default:printf("inavalid option");
            break;
    }
}