/*WAP to print Fibonacci series up to given numbers*/


#include <stdio.h>

	main() {
    int num, first = 0, second = 1, next, i;

    // Input the number of terms for Fibonacci series
    printf("\n\n\t Enter the number of terms for Fibonacci series : ");
    scanf("%d", &num);

    printf("\n\n\t Fibonacci Series up to %d terms :", num);

    // Print first two terms (0 and 1)
    printf("\n\n\t %d, %d, ", first, second);

    // Generate and print the rest of the Fibonacci series
    for (i = 3; i <= num; i++) {
        next = first + second;
        printf("\n\n\t %d, ", next);
        first = second;
        second = next;
    }

    printf("\n\n\t");

}

