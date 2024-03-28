/*Write a program make a summation of given number (E.g., 1523 Ans: -11)*/


#include <stdio.h>

	main() {
    int number, sum = 0, digit;

    // Input the number
    printf("\n\n\t Enter a number : ");
    scanf("%d", &number);

    // Make the number positive if it's negative
    if (number < 0) {
        number = -number;
    }

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Print the sum of digits
    printf("\n\n\t Sum of digits is %d", sum);

}

