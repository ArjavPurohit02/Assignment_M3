		/*.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
		and without using 3rd variable*/
		
		#include <stdio.h>

 		main() 
		 {
    			int num1, num2;

    			// Accepting two numbers from the user
    				printf("Enter the first number: ");
   		 			scanf("%d", &num1);
    				printf("Enter the second number: ");
    				scanf("%d", &num2);

    				// Swapping without using a third variable
    				num1 = num1 + num2;
    				num2 = num1 - num2;
    				num1 = num1 - num2;

    				// Displaying the swapped numbers
    				printf("After swapping:\n");
    				printf("First number: %d\n", num1);
    				printf("Second number: %d\n", num2);

		}

