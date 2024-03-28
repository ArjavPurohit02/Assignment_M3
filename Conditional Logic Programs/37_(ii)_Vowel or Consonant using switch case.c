/*Program to check if a character is a vowel or consonant using switch-case: */


#include <stdio.h>

main() {
    char ch;

    printf("\n\n\t Enter a character : ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n\n\t %c is a vowel.", ch);
            break;
        default:
            printf("\n\n\t %c is a consonant.", ch);
            break;
    }

}
