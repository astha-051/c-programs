#include <stdio.h>

int main() {
    int num1, num2;
    int quotient = 0; 
    int remainder;
   
    printf("Enter the first number (dividend): ");
    scanf("%d", &num1);
    printf("Enter the second number (divisor): ");
    scanf("%d", &num2);

    if (num2 > num1) {
        printf("Please make sure that the second number (divisor) is smaller than the first number (dividend).\n");
        return 1; 
    }

    remainder = num1;

    while (remainder >= num2) {
        remainder -= num2; 
        quotient++; 
    }

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
