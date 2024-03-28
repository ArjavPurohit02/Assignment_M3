/*WAP to find the largest of three numbers.*/


#include <stdio.h>

	main() 
	{
    	int num1, num2, num3, max;

    // Input three numbers
    printf("\n\n\t Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number using nested ternary operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the largest number
    printf("\n\n\t Largest number among %d, %d, and %d is: %d", num1, num2, num3, max);

}
