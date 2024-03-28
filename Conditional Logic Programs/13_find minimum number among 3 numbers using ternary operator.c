/*WAP to find minimum number among 3 numbers using ternary operator*/


#include <stdio.h>

 main() {
    int num1, num2, num3, min;

    // Input three numbers
    printf("\n\n\t Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the minimum number using ternary operator
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Display the minimum number
    printf("\n\n\t Minimum number among %d, %d, and %d is: %d", num1, num2, num3, min);

    }
