/*WAP to perform Palindrome number using for loop and function*/


#include <stdio.h>

int isPalindrome(int num) {
    int reverseNum = 0, originalNum = num;

    while (num > 0) {
        reverseNum = reverseNum * 10 + num % 10;
        num /= 10;
    }

    return (originalNum == reverseNum);
}

 main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
}
