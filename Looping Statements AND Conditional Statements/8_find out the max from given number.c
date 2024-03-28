/*Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/
#include <stdio.h>

	main() {
    int number, maxDigit = 0, digit;

    // Input the number
    printf("\n\n\t Enter a number : ");
    scanf("%d", &number);

    // Make the number positive if it's negative
    if (number < 0) {
        number = -number;
    }

    // Find the maximum digit in the number
    while (number > 0) {
        digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    // Print the maximum digit
    printf("\n\n\t Max number is %d", maxDigit);

}


