/*Write a program in C to compare two strings without using string library
functions.*/

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Continue comparing characters until a difference is found or both strings end
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Return 0 if characters at the same position are different
        }
        i++; // Move to the next character
    }

    // If both strings end at the same position, they are equal
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; // Return 1 if both strings are equal
    } else {
        return 0; // Return 0 if one string is shorter than the other
    }
}

 main() {
    char str1[100], str2[100];

    // Input two strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the two strings
    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

}

