/*Write a program in C to extract a substring from a given string*/


#include <stdio.h>

 main() {
    char source[100], destination[100];
    int start, length, i;

    printf("Enter a string: ");
    gets(source);

    printf("Enter starting index for substring: ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);

    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; // Add null terminator to end the string

    printf("Substring: %s\n", destination);

}

