/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include <stdio.h>

 main() {
    char str[100];
    int alphabets = 0, digits = 0, special_chars = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != ' ') {
            special_chars++;
        }
        i++;
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special_chars);

}

