#include <stdio.h>

int main()

 {

int i, rows = 5;

            for (int i = 0; i <= rows - 1; i++) { //For Loop for Row 

for (int j = 0; j <= i; j++) { //For Loop for Col

printf("*" " "); //prints * and blank space

}

printf(" \n"); // new line

}

for (int i = rows - 1; i >= 0; i--) { //For Loop for Row

for (int j = 0; j <= i - 1; j++) { //For Loop for Col

printf("*" " "); //prints * and blank space

}

            printf("\n"); //New line

 }

}

