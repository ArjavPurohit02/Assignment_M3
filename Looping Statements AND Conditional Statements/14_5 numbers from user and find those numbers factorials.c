/*Accept 5 numbers from user and find those numbers factorials*/


#include <stdio.h>

int main() {
    int numbers[5];
    printf("\n\n\t Enter 5 integers :");

    int i = 0;
    while (i < 5) {
        scanf("%d", &numbers[i]);
        i++;
    }

    printf("\n\n\t Factorials of the entered numbers are : ");

    i = 0;
    while (i < 5) {
        int num = numbers[i];
        int factorial = 1;
        int j = 1;

        while (j <= num) {
            factorial *= j;
            j++;
        }

        printf("\n\n\t %d ! = %d", num, factorial);
        i++;
    }
}
