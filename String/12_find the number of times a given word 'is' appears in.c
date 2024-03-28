/*.Write a program in C to find the number of times a given word 'is' appears in
the given string*/

#include <stdio.h>
#include <string.h>

 main() {
    char str[1000], word[] = "is";
    int occurrences = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (strstr(&str[i], word) == &str[i]) {
            occurrences++;
            i += strlen(word) - 1;
        }
    }

    printf("Number of times '%s' appears in the string: %d\n", word, occurrences);

}

