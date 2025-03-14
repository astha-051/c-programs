#include<stdio.h>
void main()
{
    int number,count,i,bin[32];

    printf("enter a decimal number:");
    scanf("%d",&number);

    count=0;
    while(number>0)
    {
        bin[count]=number%2;       //The program converts 13 into binary:

                                            // 13 % 2 = 1 → bin[0] = 1
                                            // 13 / 2 = 6 → 6 % 2 = 0 → bin[1] = 0
                                            // 6 / 2 = 3 → 3 % 2 = 1 → bin[2] = 1
                                            // 3 / 2 = 1 → 1 % 2 = 1 → bin[3] = 1
                                            // 1 / 2 = 0 → loop stops.
                                            // So, bin = [1, 1, 1, 0] (in reverse order).
        number=number/2;
        count++;
    }

    printf("binary value is:");
    for(i=(count-1);i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}