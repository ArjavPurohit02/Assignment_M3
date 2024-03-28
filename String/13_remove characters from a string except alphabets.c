/*Write a program in C to remove characters from a string except alphabets.*/


#include <stdio.h>
#include <ctype.h>

 main() {
    char str[1000], result[1000];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Add null terminator to end the result string

    printf("String with only alphabets: %s\n", result);

}

