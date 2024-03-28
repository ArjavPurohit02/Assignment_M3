/*. Program of Armstrong Number in C Using For Loop & While Loop*/


#include <stdio.h>
#include <math.h>

 main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("\n\n\t Enter an integer : ");
    scanf("%d", &number);

    originalNumber = number;

    // Count number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate result
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number)
        printf("\n\n\t %d is an Armstrong number.", number);
    else
        printf("\n\n\t %d is not an Armstrong number.", number);


}
