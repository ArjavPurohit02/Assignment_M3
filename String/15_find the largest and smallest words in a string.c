/*Write a program in C to find the largest and smallest words in a string*/


#include <stdio.h>
#include <string.h>

 main() {
    char str[1000], largest[100], smallest[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    // Initialize largest and smallest words with the first word in the string
    sscanf(str, "%s", largest);
    strcpy(smallest, largest);

    while (str[i]) {
        char word[100];
        sscanf(str + i, "%s", word);

        if (strlen(word) > strlen(largest)) {
            strcpy(largest, word);
        }
        if (strlen(word) < strlen(smallest)) {
            strcpy(smallest, word);
        }

        i += strlen(word) + 1; // Move to the next word in the string
    }

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

}

