/*C Program to Check Uppercase or Lowercase or Digit or Special
Character*/

#include <stdio.h>

main() 
		{
    char ch;

    // Input a character
    printf("\n\n\t Enter a character : ");
    scanf("%c", &ch);

    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("\n\n\t %c is an uppercase letter.", ch);
    }
    // Check if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("\n\n\t %c is a lowercase letter.", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("\n\n\t %c is a digit.", ch);
    }
    // Check if the character is a special character
    else {
        printf("\n\n\t %c is a special character.", ch);
    }

}
