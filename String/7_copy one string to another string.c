/*. Write a program in C to copy one string to another string.*/


#include <stdio.h>

 main() {
    char source[100], destination[100];
    int i = 0;

    printf("Enter a string: ");
    gets(source);

    // Copying string using a loop
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Adding null character at the end

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
}
