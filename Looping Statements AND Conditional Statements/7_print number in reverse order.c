/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746 */

#include <stdio.h>

main() {
    int number, reversedNumber = 0, remainder;

    // Input the number
    printf("\n\n\t Enter a number : ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Print the reversed number
    printf("\n\n\t Reversed number: %d", reversedNumber);

}

