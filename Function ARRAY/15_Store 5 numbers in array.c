/*Store 5 numbers in array and sort it in ascending order*/


#include <stdio.h>

 main() {
    int numbers[5]; // Array to store 5 numbers
    int i;

    printf("Enter 5 numbers:\n");

    // Input numbers from the user and store them in the array
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Display the numbers stored in the array
    printf("Numbers stored in the array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

}

