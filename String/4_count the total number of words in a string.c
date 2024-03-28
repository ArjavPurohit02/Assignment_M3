/*Write a program in C to count the total number of words in a string.*/


#include <stdio.h>

 main() {
    char str[100];
    int count = 1; // Initialize count to 1 assuming at least one word is present
    int i;

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Count the total number of words in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++; // Increment count when a space, tab, or newline is encountered
        }
    }

    printf("Total number of words in the string: %d\n", count);

}

