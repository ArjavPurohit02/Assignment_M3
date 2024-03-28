/*calculate the Factorial of a Given Number using while loop*/


#include <stdio.h>

main() 
{
    int number, factorial = 1;
    printf("\n\n\t Enter a positive integer : ");
    scanf("%d", &number);

    if (number < 0) {
        printf("\n\n\t Factorial is not defined for negative numbers.");
    } else {
        int i = 1;
        while (i <= number) {
            factorial *= i;
            i++;
        }
        printf("\n\n\t Factorial of %d is : %d", number, factorial);
    }
}
