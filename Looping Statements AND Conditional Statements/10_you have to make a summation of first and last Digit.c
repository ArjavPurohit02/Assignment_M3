/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/

#include <stdio.h>
	main() {
    int number, firstDigit, lastDigit, sum;

    // Input the number
    printf("\n\n\t Enter a number : ");
    scanf("%d", &number);

    // Extract the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Extract the last digit
    lastDigit = number % 10;

    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;

    // Print the sum of the first and last digits
    printf("\n\n\t Sum of first and last digits : %d", sum);

}
