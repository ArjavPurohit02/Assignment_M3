/*Find the Character Is Vowel or Not*/


#include <stdio.h>

main() {
    char ch;

    // Input a character
    printf("\n\n\t Enter a character : ");
    scanf("%c", &ch);

    // Convert the character to uppercase for easier comparison
    ch = toupper(ch);

    // Check if the character is a vowel
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("\n\n\t %c is a vowel.", ch);
    } else {
        printf("\n\n\t %c is not a vowel.", ch);
    }

    
}
