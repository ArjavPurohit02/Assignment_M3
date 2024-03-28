/*WAP to print factorial of given number*/


#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Input number for which factorial is to be calculated
    printf("\n\n\t Enter a number : ");
    scanf("%d", &num);

    // Calculate factorial
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Display factorial
    printf("\n\n\t Factorial of %d = %llu", num, factorial);

}

