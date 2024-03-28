//WAP to calculate swap 2 numbers with using of multiplication and division.


#include <stdio.h>

main() 
		{
    		int num1, num2, temp;

    		// Input two numbers
    		printf("Enter first number: ");
    		scanf("%d", &num1);

    		printf("Enter second number: ");
    		scanf("%d", &num2);

    		// Swap using multiplication and division
    		temp = num1;
    		num1 = num2 * num1;
    		num2 = temp / num2;

    		// Display the swapped numbers
    		printf("After swapping:\n");
    		printf("First number: %d\n", num1);
    		printf("Second number: %d\n", num2);
}
	
