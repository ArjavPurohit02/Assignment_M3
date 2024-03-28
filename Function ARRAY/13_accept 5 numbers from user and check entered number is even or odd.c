/*WAP to accept 5 numbers from user and check entered number is even or odd
using of array*/

#include <stdio.h>

 main() {
    int numbers[5];
    int i;

    // Input numbers from the user and store them in the array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Check if each number in the array is even or odd and display the result
    printf("Even/Odd Check:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }

}

