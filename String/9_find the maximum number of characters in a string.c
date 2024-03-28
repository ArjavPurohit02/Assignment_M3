/*Write a program in C to find the maximum number of characters in a string*/


#include <stdio.h>

 main() {
    char str[100];
    int maxLength = 0, currentLength = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        currentLength++;
        i++;
    }

    maxLength = currentLength;

    printf("Maximum number of characters in the string: %d\n", maxLength);

}
