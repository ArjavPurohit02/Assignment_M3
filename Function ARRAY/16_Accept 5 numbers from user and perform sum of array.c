/*Accept 5 numbers from user and perform sum of array*/


#include <stdio.h>

 main() {
    int numbers[5]; // Array to store 5 numbers
    int sum = 0;
    int i;

    printf("Enter 5 numbers:\n");

    // Input numbers from the user and store them in the array
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of numbers in the array
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the sum of numbers in the array
    printf("Sum of numbers in the array: %d\n", sum);

}

