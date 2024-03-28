/*WAP to accept 5 students name and store it in array*/


#include <stdio.h>

 main() {
    char names[5][50]; // Array to store 5 names, each with a maximum length of 50 characters
    int i;

    // Input names from the user and store them in the array
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    // Display the names entered by the user
    printf("Names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

}
