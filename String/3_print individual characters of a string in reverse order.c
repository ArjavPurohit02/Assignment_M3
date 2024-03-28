/*Write a program in C to print individual characters of a string in reverse orde*/


#include <stdio.h>

// Recursive function to print individual characters of a string in reverse order
void printReverse(char *str) {
    if (*str == '\0') {
        return; // Base case: if the current character is null terminator, return
    }
    printReverse(str + 1); // Recursively call printReverse with the next character
    printf("%c\n", *str); // Print the current character after all subsequent characters are printed
}

 main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Print individual characters of the string in reverse order using recursion
    printf("Individual characters of the string in reverse order:\n");
    printReverse(str);

}

