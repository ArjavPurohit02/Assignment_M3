/*.WAP to accept 5 numbers from user and display in reverse order using for
loop and array*/

#include <stdio.h>

 main() {
    int numbers[5];
    int i;

    // Input numbers from the user and store them in the array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Display the numbers in reverse order using a for loop
    printf("Numbers in reverse order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

}

