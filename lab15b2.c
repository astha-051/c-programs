#include<stdio.h>
#include<string.h>
void main()
{
    char c[10],c1[10],ans[10];
    int  i,j,k=0,carry=0;  //k stores ans in ans[] , carry stores carry of number

    printf("enter first binary number:");
    scanf("%s",c);

    printf("enter second binary number:");
    scanf("%s",c1);

    int lenA=strlen(c);
    int lenB=strlen(c1);

    i=lenA-1;
    j=lenB-1;  //for remove space

    while(i>=0 || j>=0 || carry)
    {
        int sum=carry;

        if(i >= 0)
        {
            sum+=c[i--]-'0';
        }
        if(j>=0)
        {
            sum+=c1[j--]-'0';
        }

        ans[k++]=(sum%2)+'0';
        carry=sum/2;
    }

    ans[k]='\0';  //for proper input

    for(int y=0;y<k/2;y++)  //sum stored reverse order so that..
    {
        char temp=ans[y];
        ans[y]=ans[k-y-1]; // swap first and last than second and second last so onn..
        ans[k-y-1]=temp;
    }

    printf("plus=%s\n",ans);
}

// c  = "1011"
// c1 = "1101"

// Step-by-step addition from right to left:

// Bit   1 + 1  → Sum = 2 → Store '0', Carry = 1
// Bit   1 + 0  → Sum = 2 → Store '0', Carry = 1
// Bit   0 + 1  → Sum = 2 → Store '0', Carry = 1
// Bit   1 + 1  → Sum = 3 → Store '1', Carry = 1
// Extra carry  → Store '1'

// Result = "11000"  (while loop)