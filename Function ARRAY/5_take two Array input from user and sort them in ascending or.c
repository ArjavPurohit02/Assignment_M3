/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/

#include <stdio.h>

void reverseString(char *str, int start, int end) {
    if (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverseString(str, start + 1, end - 1);
    }
}

 main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str, 0, strlen(str) - 1);

    printf("Reversed string: %s\n", str);

}
