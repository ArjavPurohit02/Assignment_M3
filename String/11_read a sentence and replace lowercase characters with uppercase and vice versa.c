/*Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/

#include <stdio.h>

 main() {
    char sentence[100];
    int i = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while (sentence[i] != '\0') {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - 'a' + 'A'; // Convert lowercase to uppercase
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = sentence[i] - 'A' + 'a'; // Convert uppercase to lowercase
        }
        i++;
    }

    printf("Modified sentence: %s\n", sentence);

}

