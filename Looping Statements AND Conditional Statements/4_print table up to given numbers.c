/*WAP to print table up to given numbers*/


#include <stdio.h>

int main() {
    int num, i;

    // Input number to generate the table
    printf("\n\n\t Enter a number to generate its multiplication table : ");
    scanf("%d", &num);

    // Print the multiplication table up to 10
    printf("\n\n\t Multiplication Table for %d :", num);
    for (i = 1; i <= 10; i++) {
        printf("\n\n\t %d x %d = %d", num, i, num * i);
    }

}

