/*WAP to find maximum number among 3 numbers using ternary operator*/


#include <stdio.h>

 main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("\n\n\t Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number using ternary operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the maximum number
    printf("\n\n\t Maximum number among %d, %d, and %d is: %d", num1, num2, num3, max);
}
