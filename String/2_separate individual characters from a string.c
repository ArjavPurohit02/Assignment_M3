/*Write a program in C to separate individual characters from a string.*/


#include <stdio.h>

 main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Pointer to the beginning of the string
    char *ptr = str;

    // Display individual characters from the string using pointer arithmetic
    printf("Individual characters from the string:\n");
    while (*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr++; // Move to the next character in the string
    }

}

